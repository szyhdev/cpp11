#include <iostream>

using namespace std;

struct A {
    A(int i) {
        cout << "A(int i)" << endl;
    }
    A(double d, int i) {
        cout << "A(double d, int i)" << endl;
    }
    A(float f, int i, const char *c) {
        cout << "A(float f, int i, const char *c)" << endl;
    }
};

struct B : A {
    using A::A;
    B(float f, int i, const char *c) : A(f, i, c), value(0.456) {
        cout << "B(float f, int i, const char *c)" << endl;
    }
    virtual void ExtraInterface() {
    }
    double value { 0.123 };
};

int main() {
    struct B b1(123);
    cout << b1.value << endl;
    cout << endl;

    struct B b2(3.14, 123);
    cout << b2.value << endl;
    cout << endl;

    struct B b3(6.18, 123, "name");
    cout << b3.value << endl;

    return 0;
}
