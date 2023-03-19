#include <iostream>

using namespace std;

struct Base {
    void f(double i) {
        cout << "Base: " << i << endl;
    }
};

struct Derived : Base {
    using Base::f;
    void f(int i) {
        cout << "Derived: " << i << endl;
    }
    void f(const char *name) {
        cout << "Derived: " << name << endl;
    }
};

int main() {
    Base b;
    b.f(4.5);
    b.f(10);
    // b.f("sam");  // Compile error
    cout << endl;

    Derived d;
    d.f(4.5);
    d.f(10);
    d.f("sam");

    return 0;
}

