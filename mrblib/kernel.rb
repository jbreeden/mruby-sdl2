module Kernel
  def sleep(ms)
    SDL.SDL_Delay(ms)
  end
end
