
include( CMakeParseArguments)
include( CTest )

function( add_gtest targetName )
    set( oneValueArgs CLASS NAMESPACE REQUIRES )
    set( multiValueArgs LINK REQUIRE_MATCH LABELS )

    cmake_parse_arguments( ADDGTEST "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

    include_directories( ${GTEST_INCLUDE_DIRS} )

    add_executable( ${targetName} ${ARGV1} )
    target_link_libraries( ${targetName} PRIVATE GTest::GTest algorithm ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARY} )
    target_include_directories( ${targetName} PRIVATE ${PROJECT_SOURCE_DIR} )
    set_target_properties( ${targetName} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/tests )

    add_test( ${targetName} ${CMAKE_BINARY_DIR}/tests/${targetName} )
endfunction()