SDL::SDL_Init(SDL::SDL_INIT_VIDEO)
window = SDL::SDL_CreateWindow("This border should be removed, then replaced", 100, 100, 640, 480, SDL::SDL_WINDOW_SHOWN)
SDL.SDL_Delay(3000)
SDL.SDL_SetWindowBordered(window, false)
SDL.SDL_Delay(3000)
SDL.SDL_SetWindowBordered(window, true)
SDL.SDL_Delay(3000)
