#include <iostream>
#include <typeinfo>

using namespace std;

double foo() {
    return 3.14;
}

float *bar() {
    static float a = 6.18;
    return &a;
}

int main() {
    const auto a = foo();
    cout << "a: " << typeid(a).name() << ", " << is_const<decltype(a)>::value << endl;
    const auto &b = foo();
    cout << "b: " << typeid(b).name() << ", " << is_const<decltype(b)>::value << endl;
    volatile auto *c = bar();
    cout << "c: " << typeid(c).name() << ", " << is_volatile<decltype(c)>::value << endl;
    cout << endl;

    auto d = a;
    cout << "d: " << typeid(d).name() << ", " << is_const<decltype(d)>::value << endl;
    auto &e = a;
    cout << "e: " << typeid(e).name() << ", " << is_const<decltype(e)>::value << endl;
    auto f = c;
    cout << "f: " << typeid(f).name() << ", " << is_const<decltype(f)>::value << endl;
    volatile auto &g = c;
    cout << "g: " << typeid(g).name() << ", " << is_volatile<decltype(g)>::value << endl;

    return 0;
}
