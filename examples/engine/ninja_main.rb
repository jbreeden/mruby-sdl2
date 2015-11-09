load './game.rb'
load './ninja.rb'

SDL.SDL_Init(SDL::SDL_INIT_VIDEO)
window = SDL.SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL::SDL_WINDOW_SHOWN)
raise 'Error creating window' if window.nil?

background_surface = SDL.SDL_CreateRGBSurface(0, 640, 480, 32, 0xff000000, 0x00ff0000, 0x0000ff00, 0x000000ff)
raise 'Error creating background surface' if background_surface.nil?
SDL.SDL_FillRect(background_surface, nil, 0xffffffff)

window_surface = SDL.SDL_GetWindowSurface(window)
raise 'Error getting window surface' if window_surface.nil?

event_loop = Game::EventLoop.new
input_device = Game::InputDevice.new do
  map_button(SDL::SDL_SCANCODE_A, :left)
  map_button(SDL::SDL_SCANCODE_D, :right)
  map_button(SDL::SDL_SCANCODE_W, :up)
  map_button(SDL::SDL_SCANCODE_S, :down)
  map_button(SDL::SDL_SCANCODE_J, :attack_melee)
  map_button(SDL::SDL_SCANCODE_K, :attack_range)
end
input_device.bind(event_loop)

ninja = Ninja.new
ninja.bind(event_loop, input_device)

event_loop.on(Game::RenderEvent) do
  SDL.SDL_BlitSurface(background_surface, nil, window_surface, nil)
  ninja.render(window_surface)
  SDL.SDL_UpdateWindowSurface(window)
end

event_loop.run
