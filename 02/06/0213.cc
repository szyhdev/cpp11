#include <iostream>

using namespace std;

struct A {
    ~A() {
        throw 1;
    }
};

struct B {
    ~B() noexcept(false) {
        throw 2;
    }
};

struct C {
    B b;
};

void funcA() {
    A a;
}

void funcB() {
    B b;
}

void funcC() {
    C c;
}

int main() {
    try {
        funcB();
    }
    catch (...) {
        cout << "Caught funcB." << endl;
    }

    try {
        funcC();
    }
    catch (...) {
        cout << "Caught funcC." << endl;
    }

    try {
        funcA();
    }
    catch (...) {
        cout << "Caught funcA." << endl;
    }

    return 0;
}
