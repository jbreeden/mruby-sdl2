SDL::SDL_Init(SDL::SDL_INIT_VIDEO)
window = SDL::SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL::SDL_WINDOW_SHOWN)

while true
  event = SDL.SDL_PollEvent
  puts "#{event.class} #{event.class.instance_methods(false).map { |m| "#{m}=#{event.send(m)}" }.join(', ')}" unless event.nil?
  if (SDL::QuitEvent === event)
    break
  end
end
