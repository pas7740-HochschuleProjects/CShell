cmake_minimum_required(VERSION 3.20)
project(CSHELL LANGUAGES CXX)

add_executable(main)
target_sources(main PRIVATE "main.c")
install(TARGETS main)