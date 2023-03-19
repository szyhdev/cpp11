#include <iostream>

using namespace std;

struct Object {
    virtual void func() = 0;
};

struct Base : public Object {
    void func() final {
        cout << "Base::func()" << endl;
    }
};

struct Derived : public Base {
    // Compile error
    // void func() {
    //    cout << "Derived::func()" << endl;
    // }
};

int main() {
    Derived d;
    d.func();

    return 0;
}
