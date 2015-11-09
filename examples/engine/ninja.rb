class Ninja
  @action_states = Dir.entries('../ninja').
    select { |f| f =~ /png$/ }.
    map { |f| "../ninja/#{f}" }.
    group_by { |f| f[/ninja\/(.*)__/, 1] }


  @action_states.keys.each do |state|
    (0..(@action_states[state].length - 1)).each do |index|
      @action_states[state][index] = SDL.IMG_LoadPNG_RW(SDL.SDL_RWFromFile(@action_states[state][index], 'r'))
    end
  end

  class << self
    attr_accessor :action_states
  end

  attr_accessor :action, :step, :input_device

  def initialize(&block)
    @action = 'Idle'
    @step = 0

    ninja = self

    @state_machine = Game::StateMachine.new do
      initial_state(:idle) do
        on(:keydown) do |key|
          case key
          when :up
            goto :jump
          when :right
            goto :run
          end
        end
        on(:tick) { ninja.next_frame }
        on_enter { ninja.action = 'Idle' }
        on_exit { }
      end

      state :footing do
        on_enter {
          if ninja.input_device.pressed?(:right)
            goto :run
          elsif
            goto :idle
          end
        }
      end

      state :jump do
        @hold_count = 0
        @max_hold = 15
        on(:keydown) { |key|
          case key
          when :down
            goto :glide
          when :attack_melee
            goto :jump_attack_melee
          end
        }
        on(:tick) {
          if ninja.step == 5 && @hold_count < @max_hold && ninja.input_device.pressed?(:up)
            @hold_count += 1
            next
          end
          @hold_count = 0
          ninja.next_frame
        }
        on(:complete) { exit }
        on_enter { ninja.action = 'Jump' }
        on_exit { goto :footing }
      end

      state :jump_attack_melee do
        on(:tick) { ninja.next_frame }
        on_enter { ninja.action = 'Jump_Attack' }
        on(:complete) { goto :footing }
      end

      state :glide do
        @hold_count = 0
        @max_hold = 30

        on(:tick) {
          if ninja.input_device.pressed?(:down)
            if @hold_count < @max_hold
              @hold_count += 1
              ninja.step = 0 if ninja.step >= 9
              ninja.next_frame
              next
            end
          end

          if @hold_count >= @max_hold
            @hold_count = 0
            exit
          end

          @hold_count = 0
          ninja.next_frame
        }
        on(:complete) { exit }
        on_enter { ninja.action = 'Glide' }
        on_exit { goto :footing }
      end

      state :run do
        on(:keydown) do |key|
          case key
          when :left
            goto :idle
          when :down
            goto :slide
          when :up
            goto :jump
          end
        end
        on(:keyup) do |key|
          goto :idle if key == :right
        end
        on(:tick) { ninja.next_frame }
        on_enter { ninja.action = 'Run' }
        on_exit { }
      end

      state :slide do
        on :keydown do |key|
          case key
          when :left
            goto :idle
          when :up
            goto :idle
          when :right
            goto :run
          end
        end
        on :keyup do |key|
          case key
          when :down
            goto :footing
          end
        end
        on(:tick) { ninja.next_frame }
        on_enter { ninja.action = 'Slide' }
        on_exit { }
      end
    end

    self.instance_exec(self, &block) if block_given?
  end

  def next_frame
    steps_in_action = Ninja.action_states[@action].length
    @step = (@step + 1) % steps_in_action
    if @step == 0
      @state_machine.send(:complete)
    end
  end

  def action=(val)
    if Ninja.action_states[val].nil?
      raise StandardError.new("Action #{val} not valid for ninja character")
    end
    @action = val
    @step = 0
  end

  def render(target_surface)
    SDL.SDL_BlitSurface(Ninja.action_states[@action][@step], nil, target_surface, nil)
  end

  def bind(event_loop, input_device)
    @input_device = input_device
    @event_loop = event_loop
    @input_device.on(Game::ButtonDownEvent) do |e|
      @state_machine.send(:keydown, e.key)
    end

    @input_device.on(Game::ButtonUpEvent) do |e|
      @state_machine.send(:keyup, e.key)
    end

    @event_loop.on(Game::TickEvent) do
      @state_machine.send(:tick)
    end
  end
end
