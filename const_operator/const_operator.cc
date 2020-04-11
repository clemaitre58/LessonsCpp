#include "const_operator.h"

namespace const_operator {


void f1(const double & val) {
    // val += 1
    std::cout << val << std::endl;
}

double foo::get_val()const{
    return this->val;
}

foo::foo() {

}

}


