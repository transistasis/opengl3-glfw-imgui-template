cmake_minimum_required(VERSION 3.22)

set(EXECUTABLE_NAME OpenGLTemplate)

project(OpenGLTemplate VERSION 1.0.0 LANGUAGES C CXX)

# Import CMake-based Git repositories
include(FetchContent)

# Import GLFW Library
FetchContent_Declare(
  GLFW
  GIT_REPOSITORY https://github.com/glfw/glfw.git
  GIT_TAG 3.3.8
  GIT_SHALLOW TRUE)

set(GLFW_BUILD_EXAMPLES OFF)
set(GLFW_BUILD_TESTS    OFF)
set(GLFW_BUILD_DOCS     OFF)
set(GLFW_INSTALL        OFF)

FetchContent_MakeAvailable(GLFW)

# Add subdirectories
add_subdirectory(src)