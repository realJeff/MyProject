add_library( algorithm MyAdd.hpp)
set_target_properties( algorithm PROPERTIES LINKER_LANGUAGE CXX )

add_gtest( MyAddTest tests/MyAddTest.cpp LINK algorithm )