file(GLOB_RECURSE Sources ../ *.cpp)

SET(CMAKE_MODULE_PATH
  ${CMAKE_SOURCE_DIR}/CMake/Modules
)

INCLUDE(Define_CMakeDefaults)
INCLUDE(Define_PlatformDefaults)
INCLUDE(Define_CompilerFlags)


project (cpp_skell)
set(CMAKE_BUILD_TYPE Release)

add_library(cpp_skell SHARED ${Sources})

#target_compile_options(cpp_skell PRIVATE -flat_namespace -undefined suppress)

TARGET_LINK_LIBRARIES(
    cpp_skell
)
