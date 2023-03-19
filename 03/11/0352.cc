#include <iostream>

using namespace std;

struct Test {
    typedef int foo;
};

template <typename T>
void f(typename T::foo x) {
    cout << "f(typename T::foo x): " << "x = " << x << endl;
}

template <typename T>
void f(T x) {
    cout << "f(typename T): " << "x = " << x << endl;
}

int main() {
    f<Test>(10);
    f<int>(20);

    return 0;
}
