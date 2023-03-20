#include <iostream>
#include <typeinfo>

using namespace std;

double func() {
    return 3.14;
}

int main() {
    auto x = 1;
    cout << typeid(x).name() << endl;
    auto y = func();
    cout << typeid(y).name() << endl;
    struct m {
        int i;
    } st1;
    cout << typeid(st1).name() << endl;
    auto st2 = st1;
    cout << typeid(st2).name() << endl;

    // auto z;  // Compile error
    auto z = x;
    cout << typeid(z).name() << endl;

    return 0;
}
