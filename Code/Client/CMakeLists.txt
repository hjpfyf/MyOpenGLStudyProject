
cmake_minimum_required(VERSION 3.10)

set(CLIENT_NAME client)

set(CLIENT_FILES 
	Main.cpp
	ClientLog.h)

add_executable(${CLIENT_NAME} ${CLIENT_FILES})

target_link_libraries(${CLIENT_NAME} glfw easyloggingpp world)
