#include "static_lib.hpp"

namespace StaticLibrary
{

int StLib::add(int lhs, int rhs)
{
    return lhs + rhs;
}

int StLib::sub(int lhs, int rhs)
{
    return lhs - rhs;
}

int StLib::mul(int lhs, int rhs)
{
    return lhs * rhs;
}

int StLib::div(int lhs, int rhs)
{
    return lhs / rhs;
}

std::string StLib::getLibNameBack(std::string const& str)
{
    return "From static lib: " + str;
}

} // namespace StaticLibrary