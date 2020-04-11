#include <iostream>
#include <chrono>

#include "inline_function.h"

int main()
{
    int nb_call = 1000000;
    int rtn_val = 0;

    auto t1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < nb_call; i++) {
        rtn_val = inline_function::f1(1);
    }
    auto t2 = std::chrono::high_resolution_clock::now();

    auto duration_inline = std::chrono::duration_cast<std::chrono::nanoseconds>( t2 - t1 ).count();

    std::cout << "Computing time for inline function : " << duration_inline << std::endl;


    t1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < nb_call; i++) {
        rtn_val = inline_function::f2(1);
    }
    t2 = std::chrono::high_resolution_clock::now();

    auto duration_classic = std::chrono::duration_cast<std::chrono::nanoseconds>( t2 - t1 ).count();

    std::cout << "Computing time for inline function : " << duration_classic << std::endl;
    double delta = double (duration_inline - duration_classic);
    delta /= double(duration_inline);
    delta *= 100;

    std::cout << "Difference of speed (%) : " << delta  << std::endl;

    return 0;
}
