add_library( algorithm MyAdd.hpp MyMultiply.hpp )
set_target_properties( algorithm PROPERTIES LINKER_LANGUAGE CXX )

add_gtest( MyAddTest tests/MyAddTest.cpp LINK algorithm )
add_gtest( MyMultiplTest tests/MyMultiplyTest.cpp LINK algorithm )