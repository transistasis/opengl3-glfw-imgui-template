cmake_minimum_required(VERSION 3.22)

set(EXECUTABLE_NAME OpenGLTemplate)

project(OpenGLTemplate VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

# Add subdirectories
add_subdirectory(src)
add_subdirectory(vendor)

target_include_directories(OpenGLTemplate PUBLIC
  src
  vendor/glad-build/include
  vendor/glfw-src/include
)

target_link_libraries(OpenGLTemplate
  glad
  glfw
)
