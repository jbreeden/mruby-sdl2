module SDL
  class << self
    alias SDL_BlitSurface SDL_UpperBlit
  end
end
