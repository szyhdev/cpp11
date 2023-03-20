#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T1, typename T2>
void Sum(T1 &t1, T2 &t2, decltype(t1 + t2) &s) {
    s = t1 + t2;
}

int main() {
    int a = 3;
    long b = 5;
    long e;
    Sum(a, b, e);
    cout << "e = " << e << " (" << typeid(e).name() << ")" << endl;

    float c = 1.0f;
    double d = 2.3f;
    double f;
    Sum(c, d, f);
    cout << "f = " << f << " (" << typeid(f).name() << ")" << endl;

    return 0;
}
