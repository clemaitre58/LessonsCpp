#include "abstract_class.hpp"

namespace abstract_class {
Parent::Parent() {

}

Child::Child() {

}

int Child::get_a() const {
    return a;
}
void Child::set_a(const int & val) {
    a = val;
}

}
