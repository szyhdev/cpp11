#include <iostream>

using namespace std;

struct A {
    A(int i) {
    }
};

struct B : A {
    using A::A;
    int value { 456 };
};

int main() {
    // struct B b1;  // Compile error
    struct B b2(123);
    cout << b2.value << endl;

    return 0;
}
