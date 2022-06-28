//
// Created by centos on 6/27/22.
//
#include <Algorithm/MyAdd.hpp>
#include <gtest/gtest.h>


TEST( MyAddTest, Operator )
{
    MyNamespace::MyAdd myAdd;

    EXPECT_EQ( 5, myAdd( 2, 3 ) );
}

