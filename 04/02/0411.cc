#include <iostream>
#include <typeinfo>

using namespace std;

double foo() {
    return 3.14;
}

int &bar() {
    static int a = 6.18;
    return a;
}

int main() {
    int x;
    int *y = &x;

    auto *a = &x;
    cout << "a: " << typeid(a).name() << ", " << is_reference<decltype(a)>::value << endl;
    auto &b = x;
    cout << "b: " << typeid(b).name() << ", " << is_reference<decltype(b)>::value << endl;
    auto c = y;
    cout << "c: " << typeid(c).name() << ", " << is_reference<decltype(c)>::value << endl;
    auto *d = y;
    cout << "d: " << typeid(d).name() << ", " << is_reference<decltype(d)>::value << endl;
    // auto *e = &foo();  // Compile error
    // auto &f = foo();  // Compile error
    auto g = bar();
    cout << "g: " << typeid(g).name() << ", " << is_reference<decltype(g)>::value << endl;
    auto &h = bar();
    cout << "h: " << typeid(h).name() << ", " << is_reference<decltype(h)>::value << endl;

    return 0;
}
