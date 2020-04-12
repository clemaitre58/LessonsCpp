#include <oriented_object_programming.hpp>


namespace oriented_object_programming {

foo1::foo1(const int & size) {
    array_size = size;
    method1();
}

foo1::~foo1() {
    delete array;
}

void foo1::set_data1(const double & val) {
    data1 = val;
}

void foo1::set_data2(const double & val) {
    data2 = val;
}

double foo1::get_data1() const {
    return data1;
}

double foo1::get_data2() const {
    return data2;
}

void foo1::method1() {
    array = new double[array_size];
}

void foo1::method2() {
    data1 *= 2;
    data2 *= 2;
}

}
