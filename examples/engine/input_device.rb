class Game::ButtonEvent
  attr_accessor :key, :original_event
  def initialize(key, original_event)
    @key = key
    @original_event = original_event
  end
end

class Game::ButtonDownEvent < Game::ButtonEvent; end
class Game::ButtonUpEvent < Game::ButtonEvent; end

class Game::InputDevice < Game::EventEmitter
  def initialize(&block)
    super
    @button_mapping = {}
    @button_state = Hash.new do |h, k|
      h[k] = :up
    end

    self.instance_exec(self, &block) if block_given?
  end

  def bind(event_loop)
    event_loop.on(SDL::KeyboardEvent) do |e|
      # puts "#{e.class} #{e.class.instance_methods(false).map { |m| "#{m}=#{e.send(m)}" }.join(', ')}"
      key = @button_mapping[e.keysym.scancode]
      if e.state == 1
        if @button_state[key] != :down
          @button_state[key] = :down
          self.trigger(Game::ButtonDownEvent.new(key, e))
        end
      else
        @button_state[key] = :up
        self.trigger(Game::ButtonUpEvent.new(key, e))
      end
    end
  end

  def map_button(scancode, key)
    @button_mapping[scancode] = key
  end

  def button_state(key)
    @button_state[key]
  end

  def pressed?(key)
    @button_state[key] == :down
  end
  alias down? pressed?

  def released?(key)
    @button_state[key] == :up
  end
  alias up? released?
end
