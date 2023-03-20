#include <iostream>
#include <typeinfo>

using namespace std;

int (*(*pf())())() {
    return nullptr;
}

auto pf1() -> auto (*)() -> int (*)() {
    return nullptr;
}

int main() {
    cout << is_same<decltype(pf), decltype(pf1)>::value << endl;
    cout << typeid(pf).name() << endl;

    return 0;
}
