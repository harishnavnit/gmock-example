#ifndef PRODUCTION_H
#define PRODUCTION_H

template <class T>
class Production {
public:
    float get_x_val() { return _t.get_x(); }
    float get_y_val() { return _t.get_y(); }

    int get_res() { return (int)_t.get_res(); }

    // FIXME: This will fail
    int get_dynamic_sum(int a, int b, int c) {
        return _t.compute_dynamic_sum(a, b, c);
    }

    // Non-private member to access target class methods
    T _t;
};

#endif // PRODUCTION_H
