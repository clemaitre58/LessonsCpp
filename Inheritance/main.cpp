#include <iostream>

#include "inheritance.hpp"



int main()
{
    inheritance::Parent my_parent;
    my_parent.set_a(1);
    my_parent.set_b(2);
    my_parent.set_c(3);

    std::cout << "My parent a attribute value : " << my_parent.get_a() << std::endl;
    std::cout << "My parent b attribute value : " << my_parent.get_b() << std::endl;
    std::cout << "My parent c attribute value : " << my_parent.get_c() << std::endl;

    inheritance::Child1 my_child1;
    my_child1.set_a(4);
    my_child1.set_b(5);
    my_child1.set_c(6);
    my_child1.set_d(7);

    std::cout << "My child1 a attribute value : " << my_child1.get_a() << std::endl;
    std::cout << "My child1 b attribute value : " << my_child1.get_b() << std::endl;
    std::cout << "My child1 c attribute value : " << my_child1.get_c() << std::endl;
    std::cout << "My child1 d attribute value : " << my_child1.get_d() << std::endl;

    //my_child1.b = 12;


    inheritance::Child2 my_child2;
    my_child2.set_d(8);
//    my_child2.set_a(5);
//    my_child2.set_b(6);
//    my_child2.set_b(7);

//    std::cout << "My child1 a attribute value : " << my_child2.get_a() << std::endl;
//    std::cout << "My child1 b attribute value : " << my_child2.get_b() << std::endl;
//    std::cout << "My child1 c attribute value : " << my_child2.get_c() << std::endl;
    std::cout << "My child1 d attribute value : " << my_child2.get_d() << std::endl;

    return 0;
}
