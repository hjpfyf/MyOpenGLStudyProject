
cmake_minimum_required(VERSION 3.10)

project(OpenGLProject)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

include_directories("../ThirdParty/Include")
link_directories("../ThirdParty/Library")

set(CLIENT
	Main.cpp)

set(LIBRARY 
	LibraryCode/glad.c 
	LibraryCode/stb_image.h 
	LibraryCode/stb_image.cpp)

add_executable(Client ${CLIENT} ${LIBRARY})
	
source_group("Client" FILES ${CLIENT})
source_group("Library" FILES ${LIBRARY})

target_link_libraries(Client glfw3 assimp-vc140-mt)





