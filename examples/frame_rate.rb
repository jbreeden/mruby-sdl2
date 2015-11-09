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
      ninja_states[state][index] = SDL.IMG_LoadPNG_RW(SDL.SDL_RWFromFile(ninja_states[state][index], 'r'))
    end
  end

  frame_count = 0
  t_start = Time.now
  ninja_states.keys.each do |state|
    (0..(ninja_states[state].length - 1)).each do |index|
      frame_count += 1

      ninja_surface = ninja_states[state][index]
      SDL.SDL_BlitSurface(background_surface, nil, window_surface, nil)
      SDL.SDL_BlitSurface(ninja_surface, nil, window_surface, nil)
      SDL.SDL_UpdateWindowSurface(window)
    end
  end
  t_end = Time.now
  t_total = t_end - t_start
  puts "Total time: #{t_total} Frames: #{frame_count} Frames per Time: #{frame_count / t_total}"
rescue Exception
  puts SDL.SDL_GetError
  raise
end
