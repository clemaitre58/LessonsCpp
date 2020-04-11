#include <iostream>

#include "const_operator.h"



int main()
{
    double d = const_operator::GOLDEN_NUMBER;
    // const_operator::GOLDEN_NUMBER = 20;
    const_operator::f1(d);

    const_operator::foo myfoo;
    double val = myfoo.get_val();

    std::cout << "returned value by foo class : " << val << std::endl;

    return 0;
}
