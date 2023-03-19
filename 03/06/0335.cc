#include <iostream>

using namespace std;

#pragma pack(1)

struct B1 {
};

struct B2 {
};

struct D1 : B1 {
    B1 b;
    int i;
};

struct D2 : B1 {
    B2 b;
    int i;
};

#pragma pack ()

int main() {
    D1 d1;
    D2 d2;
    cout << hex;

    cout << "D1\t" << reinterpret_cast<long long>(&d1) << endl;
    cout << "D1.b\t" << reinterpret_cast<long long>(&(d1.b)) << endl;
    cout << "D1.i\t" << reinterpret_cast<long long>(&(d1.i)) << endl;
    cout << "sizeof(D1) = " << sizeof(d1) << endl;
    cout << endl;

    cout << "D2\t" << reinterpret_cast<long long>(&d2) << endl;
    cout << "D2.b\t" << reinterpret_cast<long long>(&(d2.b)) << endl;
    cout << "D2.i\t" << reinterpret_cast<long long>(&(d2.i)) << endl;
    cout << "sizeof(D2) = " << sizeof(d2) << endl;

    return 0;
}
