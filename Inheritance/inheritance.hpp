#ifndef INHERITANCE_HPP
#define INHERITANCE_HPP

namespace inheritance {

class Parent {
public :
    Parent();
    int a;
    void set_a(const int &);
    int get_a()const;
    void set_b(const int &);
    int get_b()const;
    void set_c(const int &);
    int get_c()const;
protected :

    int b;
private:
    int c;
};

class Child1 : public Parent{
private :
    int d;
public:
    Child1();
    void set_d(const int &);
    int get_d()const;
};

class Child2 : private Parent{
private :
    int d;
public:
    Child2();
    void set_d(const int &);
    int get_d()const;
};

}

#endif // INHERITANCE_HPP
