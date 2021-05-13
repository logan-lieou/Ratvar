cmake_minimum_required(VERSION 2.4)

project(Ratvar)

find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME} src/bitboard.h src/bitboard.cc src/pawns.h src/pawns.cc)

add_executable(${PROJECT_NAME} tests/tests.cc)
target_link_libraries(${PROJECT_NAME} ${GTEST_LIBRARIES})
