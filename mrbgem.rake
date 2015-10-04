# TODO:
# Most of the configuration here should be done on the gem spec,
# not on the global conf object.

MRuby::Gem::Specification.new('mruby-wiring-pi') do |spec|
  spec.license = 'MIT'
  spec.author  = 'Jared Breeden'
  spec.summary = 'Bindings to the Wiring Pi library'

  #require 'pry'
  #binding.pry
  spec.cc.include_paths << '/usr/include'
  spec.cxx.include_paths << '/usr/include'
  spec.build.linker.library_paths << '/usr/lib'
  spec.build.linker.libraries << 'wiringPi'
  spec.build.linker.libraries << 'wiringPiDev'
end
