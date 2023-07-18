cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(Useless-CLI-Tools
    VERSION 1.0.0
    DESCRIPTION "A grouping of useless tools made in C for use in the command line."
    HOMEPAGE_URL "https://github.com/BlastlessAnthony/Useless-CLI-Tools"
)

add_library(base64 STATIC base64.c base64.h)

add_executable(base64encode base64encode.c)
target_link_libraries(base64encode PRIVATE base64)

add_executable(base64decode base64decode.c)
target_link_libraries(base64decode PRIVATE base64)

add_library(fileutils fileutils.c fileutils.h)

add_executable(strtell strtell.c)

add_executable(ftell ftell.c)
target_link_libraries(ftell PRIVATE fileutils)

add_executable(ffill ffill.c)