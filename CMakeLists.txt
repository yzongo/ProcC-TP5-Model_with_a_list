cmake_minimum_required(VERSION 3.20...4.0)
project(player-multimedia C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror=vla")

add_executable(testMO main_testlist.c multimedia-object.c test.c listMO.c)
