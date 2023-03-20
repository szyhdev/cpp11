#include <iostream>

using namespace std;

template <int i>
class X {
public:
    int value;
    X() : value(i) {
    }
};

template <class T>
class Y {
public:
    T t;
};

int main() {
    Y<X<1> > y1;
    cout << y1.t.value << endl;

    // Y<X<2>> y2;  // Compile error in C++98
    // cout << y2.t.value << endl;

    return 0;
}
