#include <iostream>

using namespace std;

struct A {
    A(int i) {
    }
    A(double d, int i) {
    }
    A(float f, int i, const char *c) {
    }
};

struct B : A {
    B(int i) : A(i), value(0.0) {
    }
    B(double d, int i) : A(d, i), value(d) {
    }
    B(float f, int i, const char *c) : A(f, i, c), value(f) {
    }
    virtual void ExtraInterface() {
    }
    double value;
};

int main() {
    struct B b1(123);
    cout << b1.value << endl;
    struct B b2(3.14, 123);
    cout << b2.value << endl;
    struct B b3(6.18f, 123, "name");
    cout << b3.value << endl;

    return 0;
}
