#include <iostream>

using namespace std;

struct A {
    A(int i) : c(i) {
    }
    int c;
};

struct B : A {
    B(int i) : A(i), d(i) {
    }
    int d;
};

int main() {
    struct B b(123);
    cout << b.c << endl;
    cout << b.d << endl;

    return 0;
}
