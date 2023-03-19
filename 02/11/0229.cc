#include <iostream>
#include <typeinfo>

using namespace std;

template <class T, class U = double>
void f(T t = 0, U u = 65) {
    cout << t << ": typeid = " << typeid(t).name() << ", " <<
            u << ": typeid = " << typeid(u).name() << endl;
}

void g() {
    f(1, 'c');
    f(1);
    // f();  // Compile error
    f<int>();
    f<int, char>();
}

int main() {
    g();

    return 0;
}
