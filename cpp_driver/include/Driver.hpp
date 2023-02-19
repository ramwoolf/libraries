#ifndef DRIVER_HPP
#define DRIVER_HPP

#include <iostream>
#include <string>

#include "dynamic_lib.hpp"
#include "static_lib.hpp"

namespace Dr {

class DriverClass {
public:
    DriverClass(std::string&& msg);
    std::string static_decorate_message();
    std::string dynamic_decorate_message();
    int         static_get_value();
    int         dynamic_get_value();

private:
    std::string                message;
    StaticLibrary::StLib       st_lib;
    DynamicLibrary::DynamicLib dyn_lib;
};

}  // namespace Dr

#endif  // DRIVER_HPP