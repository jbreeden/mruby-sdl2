begin
  ninja_states = Dir.entries('./ninja').
  select { |f| f =~ /png$/ }.
  map { |f| "./ninja/#{f}" }.
  group_by { |f| f[/ninja\/([a-zA-Z]+)/, 1] }

  SDL.SDL_Init(SDL::SDL_INIT_VIDEO)
  window = SDL.SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL::SDL_WINDOW_SHOWN)
  raise 'Error creating window' if window.nil?

  background_surface = SDL.SDL_CreateRGBSurface(0, 640, 480, 32, 0xff000000, 0x00ff0000, 0x0000ff00, 0x000000ff)
  raise 'Error creating background surface' if background_surface.nil?
  SDL.SDL_FillRect(background_surface, nil, 0xffffffff)

  window_surface = SDL.SDL_GetWindowSurface(window)
  raise 'Error getting window surface' if window_surface.nil?

  ninja_states.keys.each do |state|
    (0..(ninja_states[state].length - 1)).each do |index|
      ninja_rw = SDL.SDL_RWFromFile(ninja_states[state][index], 'r')
      raise 'Error opening ninja file' if ninja_rw.nil?

      ninja_surface = SDL.IMG_LoadPNG_RW(ninja_rw)
      raise 'Error creating ninja texture' if ninja_surface.nil?

      SDL.SDL_BlitSurface(background_surface, nil, window_surface, nil)
      SDL.SDL_BlitSurface(ninja_surface, nil, window_surface, nil)
      SDL.SDL_UpdateWindowSurface(window)
      SDL.SDL_Delay((1000/25).to_i)
    end
  end
rescue Exception
  puts SDL.SDL_GetError
  raise
end
