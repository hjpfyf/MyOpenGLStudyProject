
cmake_minimum_required(VERSION 3.10)

set(WORLD_NAME world)

set(WORLD_FILES 
	MeshData.h
	MeshData.cpp
	Model.h
	Model.cpp
	Texture.h
	Texture.cpp
	TextureManager.h
	TextureManager.cpp
	Material.h
	Material.cpp
	MaterialManager.h
	MaterialManager.cpp)

add_library(${WORLD_NAME} ${WORLD_FILES})

target_link_libraries(${WORLD_NAME} assimp easyloggingpp)
