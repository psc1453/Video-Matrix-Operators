cmake_minimum_required(VERSION 3.28)

set(CC "riscv64-unknown-linux-gnu-gcc")
set(CMAKE_C_COMPILER ${CC})

project(Video_Matrix_Operators)

set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR riscv64)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -march=rv64gcv_zfh_xtheadc_xtheadmatrix -mabi=lp64d -O2")

add_executable(Video_Matrix_Operators main.c)

target_link_libraries(Video_Matrix_Operators PRIVATE "-lm" "-static")

set_target_properties(Video_Matrix_Operators PROPERTIES OUTPUT_NAME "main")
set_target_properties(Video_Matrix_Operators PROPERTIES SUFFIX ".elf")
