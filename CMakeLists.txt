project(ChayEngine CXX)

cmake_minimum_required(VERSION 3.8)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

list(APPEND CMAKE_MODULE_PATH "${ChayEngine_SOURCE_DIR}/cmake")

find_package(glfw3 REQUIRED)
find_package(Vulkan REQUIRED)

add_subdirectory(engine)
add_subdirectory(apps)
add_subdirectory(dependencies/gpuapi)
add_subdirectory(dependencies/googletest)
