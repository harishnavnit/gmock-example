#ifndef ARITHMETIC_H
#define ARITHMETIC_H

template <class T>
class Arithmetic {
public:
    Arithmetic()
        : res(0.0)
    {}
    Arithmetic(T res)
        : res(res)
    {}

    T add(T x, T y);
    T sub(T x, T y);
    T mul(T x, T y);
    T div(T x, T y);

    T result() { return res; }

private:
    T res;
};

#include "arithmetic.cpp"

#endif // ARITHMETIC_H
