desc 'Generate bindings'
task :bindings do
  sh '(find ./sdl/SDL2-2.0.3/include -iname "sdl*.h" && echo ./sdl/SDL2_image-2.0.0/SDL_image.h) | xargs -n 1 ../clang2json/build/clang2json -I ./sdl/SDL2-2.0.3/include/ -I ./sdl/SDL2_image-2.0.0 | ruby ../mruby-bindings/mruby_bindings.rb -m SDL -g mruby-sdl -o ./mruby-sdl -f'
end


desc 'Read declarations'
task :declarations do
  `find ./sdl/SDL2-2.0.3/include/ -name "*.h"`.each_line do |f|
    f = f.strip
    success = system "../clang2json/build/clang2json -I ./sdl/SDL2-2.0.3/include #{f}"
    $stderr.puts "Error while reading #{f}. Continuing with next file."
  end
end
