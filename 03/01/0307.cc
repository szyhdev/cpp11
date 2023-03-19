#include <iostream>

using namespace std;

struct A {
    A(int i) {
    }
};

struct B {
    B(int i) {
    }
};

struct C : A, B {
    using A::A;
    using B::B;
    C(int i) : A(i), B(i) {  // Compile error without this constructor
    }
    double value { 0.123 };
};

int main() {
    struct C c1(123);
    cout << c1.value << endl;

    return 0;
}
