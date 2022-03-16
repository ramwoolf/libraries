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

std::string DynamicLib::getLibNameBack(std::string const& str)
{
    return "From shared lib: " + str;
}

} // namespace DynamicLibrary