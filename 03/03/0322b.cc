#include <iostream>

using namespace std;

struct A {
};

struct B1 {
    B1(B1 &&) = delete;
};

struct B2 {
    B2(B2 &&) {
    }
};

struct C1 {
    virtual void func() {
    }
};

struct C2 {
    C2(C2 &&) noexcept {
    }
};

int main() {
    cout << "is_move_constructible" << endl;
    cout << "  int: " << is_move_constructible<int>::value << endl;
    cout << "  A:   " << is_move_constructible<A>::value << endl;
    cout << "  B1:  " << is_move_constructible<B1>::value << endl;
    cout << endl;

    cout << "is_trivially_move_constructible" << endl;
    cout << "  int: " << is_trivially_move_constructible<int>::value << endl;
    cout << "  A:   " << is_trivially_move_constructible<A>::value << endl;
    cout << "  B2:  " << is_trivially_move_constructible<B2>::value << endl;
    cout << "  C1:  " << is_trivially_move_constructible<C1>::value << endl;
    cout << endl;

    cout << "is_nothrow_copy_constructible" << endl;
    cout << "  int: " << is_nothrow_copy_constructible<int>::value << endl;
    cout << "  A:   " << is_nothrow_copy_constructible<A>::value << endl;
    cout << "  B2:  " << is_nothrow_copy_constructible<B2>::value << endl;
    cout << "  C2:  " << is_nothrow_copy_constructible<C2>::value << endl;

    return 0;
}
