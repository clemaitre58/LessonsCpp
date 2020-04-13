#include "inheritance.hpp"

namespace inheritance {

Parent::Parent() {

}

void Parent::set_a(const int & val) {
    a = val;
}
int Parent::get_a()const {
    return a;
}

void Parent::set_b(const int & val) {
    b = val;
}
int Parent::get_b()const {
    return b;
}

void Parent::set_c(const int & val) {
    c = val;
}
int Parent::get_c()const {
    return c;
}

Child1::Child1() {

}

void Child1::set_d(const int & val) {
    d = val;
}
int Child1::get_d()const {
    return d;
}

Child2::Child2() {

}

void Child2::set_d(const int & val) {
    d = val;
}
int Child2::get_d()const {
    return d;
}

}
