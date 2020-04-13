#ifndef ABSTRACT_CLASS_H
#define ABSTRACT_CLASS_H

namespace abstract_class {

class Parent {
public :
    Parent();
    virtual int get_a() const = 0;
    virtual void set_a(const int &) = 0;
protected :
    int a;
};

class Child : public Parent{
public:
    Child();
    int get_a() const;
    void set_a(const int &);
};
}

#endif // ABSTRACT_CLASS_H
