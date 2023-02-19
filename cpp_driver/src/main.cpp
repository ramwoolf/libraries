#include <iostream>
#include <string>

#include "Driver.hpp"

int
main(void)
{
    std::string     msg{"Some message"};
    Dr::DriverClass driver(std::move(msg));

    std::cout << driver.static_decorate_message() << std::endl;
    std::cout << driver.dynamic_decorate_message() << std::endl;

    std::cout << driver.static_get_value() << std::endl;
    std::cout << driver.dynamic_get_value() << std::endl;

    return 0;
}
