file(GLOB EXAMPLE_PATHS LIST_DIRECTORIES true "${CMAKE_CURRENT_SOURCE_DIR}/*")
foreach(EXAMPLE_PATH ${EXAMPLE_PATHS})
  if(IS_DIRECTORY ${EXAMPLE_PATH})
    get_filename_component(EXAMPLE_NAME ${EXAMPLE_PATH} NAME)

    file(GLOB_RECURSE HEADER_FILES "${EXAMPLE_PATH}/*.hpp")
    file(GLOB_RECURSE SOURCE_FILES "${EXAMPLE_PATH}/*.cpp")

    source_group(TREE "${EXAMPLE_PATH}" FILES ${HEADER_FILES} ${SOURCE_FILES})

    add_library(${EXAMPLE_NAME} SHARED ${HEADER_FILES} ${SOURCE_FILES})

    set_target_properties(${EXAMPLE_NAME} PROPERTIES FOLDER "Examples")
    target_link_libraries(${EXAMPLE_NAME} PRIVATE RED4ext::SDK)

    target_compile_definitions(${EXAMPLE_NAME} PRIVATE WIN32_LEAN_AND_MEAN)
  endif()
endforeach()
