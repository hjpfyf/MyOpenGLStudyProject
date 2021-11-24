cmake_minimum_required(VERSION 3.10)

project(STBImage)

set(STBImage_FILES
	stb_image.h
	stb_image.cpp)

add_library(stb_image ${STBImage_FILES})

set_target_properties(stb_image PROPERTIES FOLDER "third_library")