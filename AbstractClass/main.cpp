#include <iostream>

#include "abstract_class.hpp"


int main() {

    abstract_class::Child my_child;
    my_child.set_a(45);
    std::cout << "Value for attribute a : " << my_child.get_a() << std::endl;

    //    abstract_class::Parent my_parent;
    abstract_class_non_pure::Parent my_parent;
    return 0;
}
