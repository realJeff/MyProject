add_library( algorithm MyAdd.hpp )
set_target_properties( algorithm PROPERTIES LINKER_LANGUAGE CXX )

add_executable( MyAddTest tests/MyAddTest.cpp)
target_link_libraries( MyAddTest PRIVATE GTest::GTest algorithm ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARY} )
target_include_directories( MyAddTest PRIVATE ${PROJECT_SOURCE_DIR} )
set_target_properties( MyAddTest PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/tests )

add_test( MyAddTest ${CMAKE_BINARY_DIR}/tests/MyAddTest )