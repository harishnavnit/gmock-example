#ifndef ARITHMETIC_H
#define ARITHMETIC_H

class Arithmetic {
public:
    // Constructors
    Arithmetic()
        : res(0.0)
    {
        std::cout << "Arithmetic() ctor called" << std::endl;
    }
    Arithmetic(int res)
        : res(res)
    {
        std::cout << "Arithmetic(int ) ctor called " << std::endl;
    }

    float add(int x, int y);
    float sub(int x, int y);
    float mul(int x, int y);
    float div(int x, int y);

    float result() { return res; }

private:
    float res;
};

#include "arithmetic.cpp"

#endif // ARITHMETIC_H
