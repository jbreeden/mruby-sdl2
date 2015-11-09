class Game::StateMachine
  def initialize(&block)
    @states = {}
    @previous_state = nil
    @current_state = nil
    @next_state = nil
    @running = false
    self.instance_exec(self, &block) if block_given?
  end

  def state(key, &block)
    new_state = Game::State.new(self, key)
    @current_state = new_state if @current_state.nil?
    @states[key] = new_state
    if block_given?
      new_state.instance_exec(new_state, &block)
    end
    new_state
  end

  def initial_state(key, &block)
    new_state = state(key, &block)
    @current_state = new_state
  end

  def goto(state_key)
    if @in_transition
      # On re-entry, just overwrite the next state
      @next_state = fetch_state(state_key)
    else
      @in_transition = true
      @next_state = fetch_state(state_key)
      @current_state.exit if @current_state && !@current_state.exiting?
      @previous_state = @current_state
      @current_state = @next_state
      @next_state = nil
      @in_transition = false
      @current_state.enter
    end
  end

  def fetch_state(state_key, &block)
    if block_given?
      @states.fetch(state_key, &block)
    else
      @states.fetch(state_key) do |key|
        raise Game::StateError.new("Unknown state: #{key}")
      end
    end
  end

  def send(input_key, *args)
    if @current_state.nil?
      raise Game::StateError.new("Attempted to send input before going to initial state")
    end
    @current_state.handle(input_key, *args)
  end
end

class Game::State
  attr_reader :key

  def initialize(machine, key)
    @machine = machine
    @key = key
    @handlers = {}
    @on_enter = nil
    @on_exit = nil
    @exiting = false
  end

  def on(key, &block)
    @handlers[key] = block
  end

  def on_enter(&block)
    @on_enter = block
  end

  def on_exit(&block)
    @on_exit = block
  end

  def handle(key, *args)
    handler = @handlers[key]
    self.instance_exec(*args, &handler) if handler
  end

  def enter
    self.instance_exec(self, &@on_enter) if @on_enter
  end

  def exit
    @exiting = true
    self.instance_exec(self, &@on_exit) if @on_exit
  end

  def exiting?
    @exiting
  end

  def goto(state_key)
    @machine.goto(state_key)
  end
end

class Game::StateError < StandardError; end
