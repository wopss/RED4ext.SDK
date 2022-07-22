cmake_minimum_required(VERSION 3.21)

project(RED4ext.SDK LANGUAGES CXX)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 20)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
elseif(CMAKE_CXX_STANDARD LESS 20)
  message(FATAL_ERROR "RED4ext.SDK requires C++20 or higher.")
endif()

if(PROJECT_IS_TOP_LEVEL)
  set_property(GLOBAL PROPERTY USE_FOLDERS ON)
endif()

option(RED4EXT_HEADER_ONLY "Use the header only version of the library" OFF)
option(RED4EXT_BUILD_EXAMPLES "Build plugin examples" OFF)

# Set the custom compile options to enable more warnings and treat them as errors.
if(MSVC)
  add_compile_options(/W4 /WX)
else()
  add_compile_options(-Wall -Wextra -Werror)
endif()

set(RED4EXT_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
file(GLOB_RECURSE RED4EXT_HEADERS "${RED4EXT_INCLUDE_DIR}/*.hpp")

if(RED4EXT_HEADER_ONLY)
  add_library(RED4ext.SDK INTERFACE)
  target_include_directories(RED4ext.SDK INTERFACE ${RED4EXT_INCLUDE_DIR})
else()
  file(GLOB_RECURSE RED4EXT_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

  source_group(TREE "${RED4EXT_INCLUDE_DIR}/RED4ext" FILES ${RED4EXT_HEADERS})
  source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}/src" FILES ${RED4EXT_SOURCES})

  add_library(RED4ext.SDK STATIC ${RED4EXT_HEADERS} ${RED4EXT_SOURCES})

  target_include_directories(RED4ext.SDK PUBLIC ${RED4EXT_INCLUDE_DIR})
  target_compile_definitions(RED4ext.SDK PUBLIC RED4EXT_STATIC_LIB)
endif()

add_library(RED4ext::SDK ALIAS RED4ext.SDK)

if(RED4EXT_BUILD_EXAMPLES)
  add_subdirectory(examples)
endif()
