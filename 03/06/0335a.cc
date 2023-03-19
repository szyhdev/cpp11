#include <iostream>

using namespace std;

struct A1 {
public:
    int a;
private:
    int b;
};

struct A2 {
public:
    int a;
    int b;
};

struct B1 {
    static int a;
};

struct D1 : B1 {
    int d;
};

struct B2 {
    int a;
};

struct D2 : B2 {
    static int d;
};

struct D3 : B2, B1 {
    static int d;
};

struct D4 : B2 {
    int d;
};

struct D5 : B2, D1 {
};

int main() {
    cout << is_standard_layout<A1>::value << endl;
    cout << is_standard_layout<A2>::value << endl;
    cout << endl;

    cout << is_standard_layout<B1>::value << endl;
    cout << is_standard_layout<D1>::value << endl;
    cout << is_standard_layout<B2>::value << endl;
    cout << is_standard_layout<D2>::value << endl;
    cout << is_standard_layout<D3>::value << endl;
    cout << endl;

    cout << is_standard_layout<D4>::value << endl;
    cout << is_standard_layout<D5>::value << endl;

    return 0;
}
