cmake_minimum_required(VERSION 3.10)

project(Glad)

set(GLAD_FILES
	glad.h
	glad.c
	../khr/khrplatform.h)

add_library(glad ${GLAD_FILES})

set_target_properties(glad PROPERTIES FOLDER "third_library")