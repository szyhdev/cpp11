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
    virtual void ExtraInterface() {
    }
    double value;
};

int main() {
    struct B b1(123);
    struct B b2(3.14, 123);
    struct B b3(6.18, 123, "name");

    return 0;
}
