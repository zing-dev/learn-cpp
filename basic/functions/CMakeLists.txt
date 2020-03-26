cmake_minimum_required(VERSION 3.2)

project(functions)

aux_source_directory(. SOURCES)
add_executable(functions ${SOURCES})