#include <iostream>

using namespace std;

double foo(int a) {
    cout << "double foo(int a)" << endl;
    return (double)a + 0.1;
}

int foo(double b) {
    cout << "int foo(double b)" << endl;
    return (int)b;
}

template <class T>
auto Forward(T t) -> decltype(foo(t)) {
    return foo(t);
}

int main() {
    cout << Forward(2) << endl;
    cout << endl;
    cout << Forward(0.5) << endl;

    return 0;
}
