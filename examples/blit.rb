SDL.SDL_Init(SDL::SDL_INIT_VIDEO)
window = SDL.SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL::SDL_WINDOW_SHOWN)
raise 'Error creating window' if window.nil?

ninja_rw = SDL.SDL_RWFromFile('ninja/Idle__000.bmp', 'r')
raise 'Error opening ninja file' if ninja_rw.nil?

ninja_surface = SDL.SDL_LoadBMP_RW(ninja_rw, 1)
raise 'Error creating ninja texture' if ninja_surface.nil?

window_surface = SDL.SDL_GetWindowSurface(window)
raise 'Error getting window surface' if window_surface.nil?

SDL.SDL_BlitSurface(ninja_surface, nil, window_surface, nil)
SDL.SDL_UpdateWindowSurface(window)

SDL.SDL_Delay(5000)
