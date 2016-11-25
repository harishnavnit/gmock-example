#include "program.h"

float Program::get_x()
{
    return x;
}

float Program::get_y()
{
    return y;
}

/*
 * Should be defined in header
 *
template <class T>
T Program::get_res()
{
    return (T)_ar.result();
}
 *
 */

void Program::set_x(int v)
{
    x = v;
}

void Program::set_y(int v)
{
    y = v;
}

void Program::set_sum()
{
    _ar.add(x, y);
}

void Program::set_sub()
{
    _ar.sub(x, y);
}

void Program::set_mul()
{
    _ar.mul(x, y);
}

void Program::set_div()
{
    _ar.div(x, y);
}
