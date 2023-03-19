#include <iostream>

using namespace std;

template <int I>
struct A {
    A() {
        size = I;
    }
    int size;
};

int xxx(int i) {
    return 0;
}

double xxx(double f) {
    return 0.0;
}

template <class T>
A<sizeof(xxx((T)0))> f(T) {
    return A<sizeof(xxx((T)0))>();
}

int main() {
    A<sizeof(xxx((int)0))> a = f(1);
    cout << a.size << endl;
    A<sizeof(xxx((double)0))> b = f(1.0);
    cout << b.size << endl;

    return 0;
}
