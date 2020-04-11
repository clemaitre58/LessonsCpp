#include <iostream>

#include "function_overloading.h"

int main()
{
    int a = 5;
    int b = 19;
    double c = 3.14;
    double d = 1.61;
    std::cout << "Before swap ref, a : " << a << "\tb : \t" << b << std::endl;
    function_overloading::swap(a, b);
    std::cout << "After swap ref, a : " << a << "\tb : \t" << b << std::endl;
    function_overloading::swap(&a, &b);
    std::cout << "After swap pointer, a : " << a << "\tb : \t" << b << std::endl;

    std::cout << "Before swap double, c : " << c << "\td : \t" << d << std::endl;
    function_overloading::swap(d, c);
    std::cout << "After swap double, c : " << c << "\td : \t" << d << std::endl;

    return 0;
}
