#include <iostream>
#include <type_traits>

using namespace std;

int main() {
    const int ci = 0;
    volatile int vi;

    struct S {
        int i;
    };
    const S a = { 0 };

    volatile S b;
    volatile S *p = &b;

    cout << is_const<decltype(ci)>::value << endl;
    cout << is_volatile<decltype(vi)>::value << endl;
    cout << endl;

    cout << is_const<decltype(a)>::value << endl;
    cout << is_volatile<decltype(b)>::value << endl;
    cout << endl;

    cout << is_const<decltype(a.i)>::value << endl;
    cout << is_volatile<decltype(p->i)>::value << endl;

    return 0;
}
