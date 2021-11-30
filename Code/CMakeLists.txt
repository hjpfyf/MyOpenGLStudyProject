
cmake_minimum_required(VERSION 3.10)

project(LittleBirdRenderEngine)

add_subdirectory(ThirdLibrary/glfw)
add_subdirectory(ThirdLibrary/stb_image)
add_subdirectory(ThirdLibrary/glad)
add_subdirectory(ThirdLibrary/assimp)
add_subdirectory(ThirdLibrary/easyloggingpp)
add_subdirectory(Client)
add_subdirectory(World)
