cmake_minimum_required(VERSION 3.25)
project(RayTracer)
add_executable(main src/main.cpp
    src/Vec3.cpp
    src/Color.cpp
    src/Camera.cpp
    src/Ray.cpp
    src/Sphere.cpp
    src/World.cpp
    src/Renderer.cpp
    src/Image.cpp
)
target_include_directories(main PRIVATE "${CMAKE_SOURCE_DIR}/headers")