class Game::RenderEvent
  attr_accessor :timestamp

  def initialize
    @timestamp = SDL.SDL_GetTicks
  end
end

class Game::TickEvent
  attr_accessor :timestamp

  def initialize
    @timestamp = SDL.SDL_GetTicks
  end
end

class Game::EventLoop < Game::EventEmitter
  attr_accessor :terminating,
   :ms_per_frame,
   :start_time,
   :last_tick_rendered,
   :last_tick,
   :now,
   :this_tick

  def initialize
    super
    @logger = nil
    @terminating = false
    @ms_per_frame = (1000 / 25).to_i
    @last_tick_rendered = 0
    @last_tick = 0
    @this_tick = 0
    @now = SDL.SDL_GetTicks
  end

  def update_clock
    self.now = SDL.SDL_GetTicks
    self.this_tick = (now / ms_per_frame).to_i
    (this_tick - last_tick).times do
      trigger(TickEvent.new)
    end
    self.last_tick = this_tick
  end

  def run
    self.start_time = SDL.SDL_GetTicks

    if @logger
      loop_times = [0]
      avg_loop_time = 0
      t_last = SDL.SDL_GetTicks
    end

    until @terminating
      while event = SDL.SDL_PollEvent
        if event.kind_of?(SDL::QuitEvent)
          terminating = true
          break
        end
        update_clock
        trigger(event)
      end
      break if terminating

      update_clock
      if this_tick > last_tick_rendered
        trigger(Game::RenderEvent.new)
        self.last_tick_rendered = this_tick
      else
        SDL.SDL_Delay(10)
      end

      if @logger
        t_now = SDL.SDL_GetTicks
        t_delta = t_now - t_last
        loop_times.shift if loop_times.length >= 100
        loop_times.push t_delta
        loop_time_sum = loop_times.reduce { |t1, t2| t1 + t2 }
        t_avg = loop_time_sum / 100.0
        t_last = t_now
        @logger.puts "fps = #{ 1 / (t_avg / 100) }"
      end
    end
  end
end
