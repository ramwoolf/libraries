#include <iostream>
#include <gtest/gtest.h>

#include "dynamic_lib.hpp"

namespace DynamicLibrary
{

namespace Testing
{

class Test_DynLib : public ::testing::Test
{
public:
    Test_DynLib() {}
    ~Test_DynLib() {}
    void SetUp()
    {
    }

    void TearDown()
    {
    }
};

TEST_F(Test_DynLib, TestAdd)
{
    int a = 8;
    int b = 12;
    int awaited_result = a + b;
    DynamicLib dynamic_lib;
    int res = dynamic_lib.add(a, b);
    ASSERT_EQ(res, awaited_result);
}

} // namespace Testing
} // namespace DynamicLibrary
