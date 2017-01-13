file(GLOB_RECURSE Sources ../ *.cpp)

INCLUDE(Define_CMakeDefaults)
INCLUDE(Define_PlatformDefaults)
INCLUDE(Define_CompilerFlags)

ADD_EXECUTABLE(
    ${EXECUTABLE_NAME}
    ${Sources}
)

TARGET_LINK_LIBRARIES(
    ${EXECUTABLE_NAME} cpp_skell
)
