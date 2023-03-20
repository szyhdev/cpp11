#include <iostream>

using namespace std;

int main() {
    auto x = 1;
    cout << "x: " << typeid(x).name() << endl;
    auto x1(1);
    cout << "x1: " << typeid(x1).name() << endl;
    auto y { 1 };
    cout << "y: " << typeid(y).name() << endl;
    // auto y1 { 1, 2, 3 };  // Compile error
    auto y1 = { 1, 2, 3 };
    cout << "y1: " << typeid(y1).name() << endl;
    auto z = new auto(1);
    cout << "z: " << typeid(z).name() << endl;

    return 0;
}
