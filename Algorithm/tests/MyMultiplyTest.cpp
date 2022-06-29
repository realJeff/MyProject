//
// Created by centos on 6/28/22.
//
#include <Algorithm/MyMultiply.hpp>
#include <gtest/gtest.h>


TEST( MyAddTest, Operator )
{
    MyNamespace::MyMultiply myMultiply;

    EXPECT_EQ( 6, myMultiply( 2, 3 ) );
}