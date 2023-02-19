#include "Driver.hpp"

namespace Dr {

DriverClass::DriverClass(std::string&& msg)
  : message(std::move(msg))
{
}

std::string
DriverClass::static_decorate_message()
{
    return st_lib.getLibNameBack(message);
}

std::string
DriverClass::dynamic_decorate_message()
{
    return dyn_lib.getLibNameBack(message);
}

int
DriverClass::static_get_value()
{
    return st_lib.add(12, 34);
}

int
DriverClass::dynamic_get_value()
{
    return dyn_lib.add(12, 34);
}

}  // namespace Dr