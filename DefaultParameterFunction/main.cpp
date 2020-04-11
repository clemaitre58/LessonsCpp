#include <iostream>

#include "default_parameter.h"

int main()
{
    std::cout << "With all parameters " << default_parameter::add(12., 16., 5.) << std::endl;
    std::cout << "With 2 parameters " << default_parameter::add(12., 16.) << std::endl;
    std::cout << "With 1 parameters " << default_parameter::add(12.) << std::endl;
    std::cout << "With no parameter " << default_parameter::add() << std::endl;
    return 0;
}
