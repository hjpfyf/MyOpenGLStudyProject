
cmake_minimum_required(VERSION 3.10)

project(LittleBirdRenderEngine)

set(CLIENT_NAME client)

set(CLIENT_FILES
	Main.cpp)

add_executable(${CLIENT_NAME} ${CLIENT_FILES})

add_subdirectory(ThirdLibrary/glfw)
add_subdirectory(ThirdLibrary/stb_image)
add_subdirectory(ThirdLibrary/glad)
add_subdirectory(ThirdLibrary/assimp)

target_link_libraries(${CLIENT_NAME} glfw assimp glad stb_image)





