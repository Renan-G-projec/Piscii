# Ad Maiorem Dei Gloriam!
cmake_minimum_required(VERSION 3.16)
project(Piscii CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Piscii)

target_sources(
  Piscii
  PRIVATE

  src/main.cpp
  src/canvas.cpp
  src/terminalManager.cpp
)

target_include_directories(
  Piscii
  PRIVATE

  include
)

add_executable(PisciiTests)

target_sources(
  PisciiTests
  PRIVATE

  src/tests/main.cpp
  src/tests/canvas.cpp
  src/canvas.cpp
)

target_include_directories(
  PisciiTests
  PRIVATE

  include
)
