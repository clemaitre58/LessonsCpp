#ifndef ORIENTED_OBJECT_PROGRAMMING_H
#define ORIENTED_OBJECT_PROGRAMMING_H



namespace oriented_object_programming {

struct ToyStruct {
    double a;
    double b;
};

class foo1 {
public:
    foo1(const int &);
    ~foo1();

    void set_data1(const double &);
    void set_data2(const double &);

    double get_data1() const;
    double get_data2() const;
    void method2();

private:
    double data1;
    double data2;
    double * array;
    int array_size;

    void method1();
};

}


#endif // ORIENTED_OBJECT_PROGRAMMING_H
