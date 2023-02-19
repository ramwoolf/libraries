#ifndef STUPID_LIB_HPP
#define STUPID_LIB_HPP

#include <string>

namespace StaticLibrary {

class StLib {
public:
    int         add(int lhs, int rhs);
    int         sub(int lhs, int rhs);
    int         mul(int lhs, int rhs);
    int         div(int lhs, int rhs);
    std::string getLibNameBack(std::string const& str);
};

}  // namespace StaticLibrary

#endif  // STUPID_LIB_HPP