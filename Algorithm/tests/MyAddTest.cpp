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

struct AddParas
{
    int value0;
    int value1;
    int sum;
};

struct MyAddFixture : ::testing::TestWithParam< AddParas >
{};

TEST_P( MyAddFixture, Add )
{
    MyNamespace::MyAdd myAdd;

    auto param = GetParam();
    EXPECT_EQ( param.sum, myAdd( param.value0, param.value1 ) ) << param.value0 << "," << param.value1;
}

INSTANTIATE_TEST_CASE_P( MyAddTest, MyAddFixture, ::testing::Values(
        AddParas{ 2, 3, 5 },
        AddParas{ -1, -3, -4 },
        AddParas{ -2, 3, 1 },
        AddParas{ 2, -3, 1 }
) );
