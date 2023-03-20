#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    unsigned int a = 4294967295;
    unsigned int b = 1;
    auto c = a + b;
    cout << "a == " << a << " (type id == " << typeid(a).name() << ")" << endl;
    cout << "b == " << b << " (type id == " << typeid(b).name() << ")" << endl;
    cout << "c == " << c << " (type id == " << typeid(c).name() << ")" << endl;

    return 0;
}
