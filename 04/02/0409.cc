#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T1, typename T2>
double Sum(T1 &t1, T2 &t2) {
    auto s = t1 + t2;
    cout << "type id of s == " << typeid(s).name() << endl;
    return s;
}

int main() {
    int a = 3;
    long b = 5;
    float c = 1.0f, d = 2.3f;

    auto e = Sum<int, long>(a, b);
    cout << "type id of e == " << typeid(e).name() << ", e = " << e << endl;
    auto f = Sum<float, float>(c, d);
    cout << "type id of f == " << typeid(f).name() << ", f = " << f << endl;

    return 0;
}
