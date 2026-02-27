cmake_minimum_required(VERSION 3.14)

project(c_template C)

# Languages
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# include headers directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# library containing reusable code
add_library(c_template_lib
    src/c_template.c
)

# main executable links with the library
add_executable(c_template
    src/main.c
)
target_link_libraries(c_template PRIVATE c_template_lib)

# Add tests
enable_testing()

# unit test executable
add_executable(c_template_test
    tests/test_add.c
)
target_link_libraries(c_template_test PRIVATE c_template_lib)
add_test(NAME add_test COMMAND c_template_test)

# integration test that runs the main program
add_test(NAME integration_test COMMAND c_template)
