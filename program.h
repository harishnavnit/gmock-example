#ifndef PROGRAM_H
#define PROGRAM_H

#include <cstdarg>
#include "arithmetic.h"

class Program {
public:
    // Constructor
    Program()
        : x(0), y(0)
    {
        std::cout << "Program() ctor called" << std::endl;
        //_ar = Arithmetic();
    }

    // Getter functions
    float get_x();
    float get_y();

    // Setter functions
    void set_sum();
    void set_sub();
    void set_mul();
    void set_div();
    void set_x(int v);
    void set_y(int v);

    // Overloaded method
    int compute_dynamic_sum(int x, int y, int z) {
        return (x + y + z);
    }

    // template methods
    template <class T>
    T get_res();

    template <class T>
    T compute_dynamic_sum(T);

    template <class T, typename... Args>
    T compute_dynamic_sum(T , Args&&...);

private:
    int x, y;
    Arithmetic _ar;
};

template <class T>
T Program::get_res()
{
    return (T)_ar.result();
}

template <class T>
T Program::compute_dynamic_sum(T n)
{
    return n;
}

template <class T, typename... Args>
T Program::compute_dynamic_sum(T n, Args&&... args)
{
    return n + compute_dynamic_sum(args...);
}

#include "program.cpp"

#endif // PROGRAM_H
