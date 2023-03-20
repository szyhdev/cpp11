#include <iostream>

using namespace std;

enum class C : char {
    C1 = 1, C2 = 2
};

enum class D : unsigned int {
    D1 = 1, D2 = 2, Dbig = 0xFFFFFFF0U
};

enum class E : unsigned long {
    E1 = 1, E2 = 2, Ebig = 0xFFFFFFFFFLL
};

int main() {
    cout << sizeof(C::C1) << endl;
    cout << endl;

    cout << (unsigned int)D::Dbig << endl;
    cout << sizeof(D::D1) << endl;
    cout << sizeof(D::Dbig) << endl;
    cout << endl;

    cout << (unsigned long)E::Ebig << endl;
    cout << sizeof(E::E1) << endl;
    cout << sizeof(E::Ebig) << endl;

    return 0;
}
