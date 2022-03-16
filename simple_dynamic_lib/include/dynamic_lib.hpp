#ifndef DYNAMIC_LIB_HPP
#define DYNAMIC_LIB_HPP

#include <string>

namespace DynamicLibrary
{

class DynamicLib
{
public:
    int add(int lhs, int rhs);
    int sub(int lhs, int rhs);
    int mul(int lhs, int rhs);
    int div(int lhs, int rhs);
    std::string getLibNameBack(std::string const& str);
};

} // namespace DynamicLibrary

# endif // DYNAMIC_LIB_HPP