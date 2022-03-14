#include "dynamic_lib.hpp"

namespace DynamicLibrary
{

int DynamicLib::add(int lhs, int rhs)
{
    return lhs + rhs;
}

int DynamicLib::sub(int lhs, int rhs)
{
    return lhs - rhs;
}

int DynamicLib::mul(int lhs, int rhs)
{
    return lhs * rhs;
}

int DynamicLib::div(int lhs, int rhs)
{
    return lhs / rhs;
}

} // namespace DynamicLibrary