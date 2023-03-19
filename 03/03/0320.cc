#include <iostream>

using namespace std;

struct Copyable {
    Copyable() {
        cout << "[" << hex << this << "] Constructor" << endl;
    }
    Copyable(const Copyable &c) {
        cout << "[" << hex << this << "] Copied" << endl;
    }
};

Copyable ReturnRvalue() {
    return Copyable();
}

void AcceptVal(Copyable c) {
    cout << "[" << hex << &c << "] AcceptVal" << endl;
}

void AcceptRef(const Copyable &c) {
    cout << "[" << hex << &c << "] AcceptRef" << endl;
}

void AcceptRvalueRef(Copyable &&c) {
    cout << "[" << hex << &c << "] AcceptRvalueRef" << endl;
}

int main() {
    cout << "Pass by value" << endl;
    AcceptVal(ReturnRvalue());
    cout << endl;

    cout << "Pass by reference" << endl;
    AcceptRef(ReturnRvalue());
    cout << endl;

    cout << "Pass by rvalue-reference" << endl;
    AcceptRvalueRef(ReturnRvalue());
    cout << endl;

    cout << is_lvalue_reference<int>::value << ", " << is_rvalue_reference<int>::value <<
            ", " << is_reference<int>::value << endl;
    cout << is_lvalue_reference<int&>::value << ", " << is_rvalue_reference<int&>::value <<
            ", " << is_reference<int&>::value << endl;
    cout << is_lvalue_reference<int&&>::value << ", " << is_rvalue_reference<int&&>::value <<
            ", " << is_reference<int&&>::value << endl;

    return 0;
}
