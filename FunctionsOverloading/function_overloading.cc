#include "function_overloading.h"


namespace function_overloading {


void swap(int & a, int & b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(int * a, int * b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(double & a, double & b) {
    double temp = a;
    a = b;
    b = temp;
}

}
