file(GLOB_RECURSE headers ./**/*.hpp ./**/*.inl)
file(GLOB_RECURSE sources ./**/*.cpp)

add_library(mos6502 SHARED ${sources} ${headers})
add_library(ec4::lib6502 ALIAS mos6502)