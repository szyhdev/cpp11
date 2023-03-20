#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    auto x = 1, y = 2;
    cout << "x: " << typeid(x).name() << endl;
    cout << "y: " << typeid(y).name() << endl;

    const auto *m = &x, n = 1;
    cout << "m: " << typeid(m).name() << endl;
    cout << "n: " << typeid(n).name() << endl;

    // auto i = 1, j = 3.14;  // Compile error
    auto i = 1;
    auto j = 3.14;
    cout << "i: " << typeid(i).name() << endl;
    cout << "j: " << typeid(j).name() << endl;

    auto o = 1, &p = o, *q = &p;
    cout << "o: " << typeid(o).name() << endl;
    cout << "p: " << typeid(p).name() << endl;
    cout << "q: " << typeid(q).name() << endl;

    return 0;
}
