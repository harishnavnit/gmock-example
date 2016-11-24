#ifndef ARITHMETIC_H
#define ARITHMETIC_H

class Arithmetic {
public:
    Arithmetic()
        : res(0.0)
    {}
    Arithmetic(int res)
        : res(res)
    {}

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
