#ifndef PROGRAM_H
#define PROGRAM_H

#include "arithmetic.h"

class Program {
public:
    // Constructor
    Program()
        : x(0.0), y(0.0)
    {
        std::cout << "Program() ctor called" << std::endl;
        _ar = Arithmetic();
    }

    // Getter functions
    float get_x();
    float get_y();
    float get_res();

    // Setter functions
    void set_x(int v);
    void set_y(int v);

    void set_sum();
    void set_sub();
    void set_mul();
    void set_div();

private:
    int x, y;
    Arithmetic _ar;
};

#include "program.cpp"

#endif // PROGRAM_H
