class Game::EventEmitter
  def initialize
    @handlers = Hash.new do |h, k|
      h[k] = []
    end
    @all_handlers = []
  end

  def on(event_class, &handler)
    if event_class == :all
      @all_handlers.push(handler)
    else
      @handlers[event_class].push(handler)
    end
  end

  def off(event_class, &handler)
    if event_class == :all
      @all_handlers.delete(handler)
    else
      @handlers[event_class].delete(handler)
    end
  end

  def trigger(event)
    (@handlers[event.class] + @all_handlers).each do |handler|
      handler[*event]
    end
  end
end
