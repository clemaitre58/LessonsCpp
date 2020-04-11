#ifndef CONST_OPERATOR_H
#define CONST_OPERATOR_H

#include <iostream>

namespace const_operator {

const double GOLDEN_NUMBER = 1.61;
void f1(const double &);

class foo{
public :
    double get_val() const;
    foo();
private:
    double val = 3;
};
}

#endif // CONST_OPERATOR_H
