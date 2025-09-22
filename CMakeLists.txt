cmake_minimum_required(VERSION 3.16)
project(HelloQuantDev CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ---- Library ----
add_library(math lib/math/add.cpp)
target_include_directories(math PUBLIC lib/math)

# ---- App ----
add_executable(hello apps/hello/main.cpp)
target_link_libraries(hello PRIVATE math)

# ---- Testing ----
include(CTest)
enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(unit_tests tests/test_add.cpp)
target_link_libraries(unit_tests math GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(unit_tests)
