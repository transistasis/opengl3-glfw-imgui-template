include(FetchContent)
set(FETCHCONTENT_QUIET on)
set(FETCHCONTENT_BASE_DIR ${PROJECT_SOURCE_DIR}/vendor CACHE PATH "Missing description." FORCE)

message(STATUS "Downloading third party libraries using CMake's FetchContent and (not) CPM (yet)")

FetchContent_Declare(
	glad
	GIT_REPOSITORY	https://github.com/Dav1dde/glad.git
	GIT_TAG			v2.0.4
	GIT_SHALLOW		TRUE
	SOURCE_SUBDIR	cmake
)
FetchContent_Declare(
	glfw
	GIT_REPOSITORY	https://github.com/glfw/glfw.git
	GIT_TAG			3.3.8
	GIT_SHALLOW		TRUE
)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(glad glfw)

# glad_add_library(glad_gl_core_33 SHARED API gl:core=3.3)
glad_add_library(glad STATIC API gl:core=3.3 LOCATION ${PROJECT_SOURCE_DIR}/vendor/glad-build/${TARGET})

set_target_properties(glad PROPERTIES FOLDER "Utilities/glad")
set_target_properties(glfw PROPERTIES FOLDER "Utilities/GLFW3")
# set_target_properties(uninstall PROPERTIES FOLDER "Utilities/GLFW3")
set_target_properties(update_mappings PROPERTIES FOLDER "Utilities/GLFW3")

message(STATUS "Fetching thirdparty libraries done")