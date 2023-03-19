#include <iostream>

using namespace std;

void Throw() {
    throw 1;
}

void NoBlockThrow() {
    Throw();
}

void BlockThrow() noexcept {
    Throw();
}

int main() {
    try {
        Throw();
    }
    catch (...) {
        cout << "Found throw 1." << endl;
    }

    try {
        NoBlockThrow();
    }
    catch (...) {
        cout << "Throw is not blocked." << endl;
    }

    try {
        BlockThrow();
    }
    catch (...) {
        cout << "Throw is blocked." << endl;
    }

    return 0;
}
