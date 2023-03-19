#include <iostream>
#include <boost/core/ignore_unused.hpp>

using namespace std;
using namespace boost;

struct Copyable {
    Copyable() {
        cout << "[" << hex << this << "] Constructor" << endl;
    }
    Copyable(const Copyable &c) {
        cout << "[" << hex << &c << "] Copied" << endl;
    }
    Copyable(Copyable &&c) {
        cout << "[" << hex << &c << "] Moved" << endl;
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
    Copyable news = move(c);
    ignore_unused(news);
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

    return 0;
}
