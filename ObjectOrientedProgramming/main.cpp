#include <iostream>

#include "oriented_object_programming.hpp"



int main()
{
    oriented_object_programming::foo1 myfoo1(10);
    oriented_object_programming::foo1 * myfoo2;
    myfoo2 =  new oriented_object_programming::foo1(10);

    myfoo1.set_data1(3.14);
    myfoo1.set_data2(1.61);
    std::cout << "foo1 data1 : " << myfoo1.get_data1() << std::endl;
    std::cout << "foo1 data2 : " << myfoo1.get_data2() << std::endl;
    myfoo1.method2();
    std::cout << "after calling method 2: " << std::endl;
    std::cout << "foo1 data1 : " << myfoo1.get_data1() << std::endl;
    std::cout << "foo1 data2 : " << myfoo1.get_data2() << std::endl;

    std::cout << "Using an object allocated dynamicly : " << std::endl;
    myfoo2->set_data1(3.14);
    myfoo2->set_data2(1.61);
    std::cout << "foo2 data1 : " << myfoo2->get_data1() << std::endl;
    std::cout << "foo2 data2 : " << myfoo2->get_data2() << std::endl;
    myfoo2->method2();
    std::cout << "after calling method 2: " << std::endl;
    std::cout << "foo2 data1 : " << myfoo2->get_data1() << std::endl;
    std::cout << "foo2 data2 : " << myfoo2->get_data2() << std::endl;

    oriented_object_programming::ToyStruct my_toystruct;
    my_toystruct.a = 10;
    my_toystruct.b = 6.626;

    std::cout << "example ok using a structure: " << std::endl;
    std::cout << "my_toystruct a : " << my_toystruct.a << std::endl;
    std::cout << "my_toystruct b : " << my_toystruct.b << std::endl;



    delete myfoo2;

    return 0;
}
