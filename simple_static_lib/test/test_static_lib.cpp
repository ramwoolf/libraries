#include <iostream>
#include "gtest/gtest.h"

#include "static_lib.hpp"

namespace StaticLibrary
{

namespace Testing
{

class Test_StLib : public ::testing::Test
{
protected:
    Test_StLib() {}
    ~Test_StLib() {}
    void SetUp()
    {
    }

    void TearDown()
    {
    }
};

TEST_F(Test_StLib, TestAdd)
{
    int a = 8;
    int b = 12;
    int awaited_result = a + b;
    StLib st_lib;
    int res = st_lib.add(a, b);
    ASSERT_EQ(res, awaited_result);
}

} // namespace Testing
} // namespace StaticLibrary
