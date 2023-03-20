#include <iostream>

using namespace std;

template <int i>
class X {
public:
    int value;
    X() : value(i) {
    }
};

int main() {
    // X<1 >> 5> x1;  // Compile error in C++11
    // cout << x1.value << endl;

    X<(1 >> 5)> x2;
    cout << x2.value << endl;

    return 0;
}
