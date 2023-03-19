#include <iostream>

using namespace std;

class Moveable {
public:
    Moveable() : i(new int(123)) {
        cout << "[" << hex << this << "] Moveable Constructor" << endl;
    }
    ~Moveable() {
        delete i;
        cout << "[" << hex << this << "] Moveable Destructor" << endl;
    }
    // Moveable(const Moveable &&m) : i(m.i) {  // Compile error
    Moveable(Moveable &&m) : i(m.i) {
        m.i = nullptr;
        cout << "[" << hex << this << "] Moveable Moved" << endl;
    }
    int *i;
};

Moveable GetTemp() {
    Moveable tmp = Moveable();
    return tmp;
}

int main() {
    Moveable a(GetTemp());

    return 0;
}
