#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    int i;
    cout << typeid(i).name() << endl;
    decltype(i) j = 0;
    cout << typeid(j).name() << endl;
    cout << endl;

    float a;
    cout << typeid(a).name() << endl;
    double b;
    cout << typeid(b).name() << endl;
    decltype(a + b) c;
    cout << typeid(c).name() << endl;

    return 0;
}
