#include <iostream>

using namespace std;

struct A {
    A(double d = 2.4, int i = 3) : d(d), i(i) {
        cout << "A(double d = 2.4, int i = 3)" << endl;
    }
    double d;
    int i;
};

struct B : A {
    using A::A;
    virtual void ExtraInterface() {
    }
    double value { 0.123 };
};

int main() {
    struct B b1;
    cout << b1.d << ", " << b1.i << endl;
    struct B b2(3.14);
    cout << b2.d << ", " << b2.i << endl;
    struct B b3(3.14, 123);
    cout << b3.d << ", " << b3.i << endl;
    cout << endl;

    struct B b4(b1);
    cout << b4.d << ", " << b4.i << endl;
    struct B b5(b2);
    cout << b5.d << ", " << b5.i << endl;
    struct B b6(b3);
    cout << b6.d << ", " << b6.i << endl;

    return 0;
}
