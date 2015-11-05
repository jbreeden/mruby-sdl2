MRuby::Gem::Specification.new('mruby-sdl') do |spec|
  spec.author = "Jared Breeden"
  spec.license = "None yet"
  [spec.cc.flags, spec.cxx.flags].each do |flags|
    flags << `sdl2-config --cflags`.strip
  end
  spec.linker.flags << `sdl2-config --static-libs`.strip
end
