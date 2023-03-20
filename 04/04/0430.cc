#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T1, typename T2>
auto Sum(const T1 &t1, const T2 &t2) -> decltype(t1 + t2) {
    cout << "Sum: type id of 't1' == " << typeid(t1).name() << endl;
    cout << "Sum: type id of 't2' == " << typeid(t2).name() << endl;
    return t1 + t2;
}

template <typename T1, typename T2>
auto Mul(const T1 &t1, const T2 &t2) -> decltype(t1 * t2) {
    cout << "Mul: type id of 't1' == " << typeid(t1).name() << endl;
    cout << "Mul: type id of 't2' == " << typeid(t2).name() << endl;
    return t1 * t2;
}

int main() {
    auto a = 3;
    auto b = 4L;
    auto pi = 3.14;

    auto c = Mul(Sum(a, b), pi);
    cout << endl;

    cout << "c = " << c << endl;
    cout << "type id of 'c' == " << typeid(c).name() << endl;

    return 0;
}
