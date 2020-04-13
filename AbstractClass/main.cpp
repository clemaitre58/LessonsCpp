#include <iostream>

#include "abstract_class.hpp"


int main() {

    abstract_class::Child my_child;
    my_child.set_a(45);
    std::cout << "Value for attribute a (pure): " << my_child.get_a() << std::endl;

    //    abstract_class::Parent my_parent;
    abstract_class_non_pure::Parent my_parent;

    abstract_class_non_pure::Child my_child_non_pure;
    my_child_non_pure.set_a(69);
    std::cout << "Value for attribute a (non pure) : " << my_child_non_pure.get_a() << std::endl;
    return 0;
}
