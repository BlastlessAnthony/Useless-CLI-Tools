add_library(base64 STATIC base64.c base64.h)

add_executable(base64encode base64encode.c)
target_link_libraries(base64encode PRIVATE base64)

add_executable(base64decode base64decode.c)
target_link_libraries(base64decode PRIVATE base64)

add_executable(strtell strtell.c)
