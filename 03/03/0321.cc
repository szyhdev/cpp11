#include <iostream>

using namespace std;

class Moveable {
public:
    Moveable() : i(new int(123)) {
        cout << "[" << hex << this << "] Constructor" << endl;
    }
    ~Moveable() {
        delete i;
        cout << "[" << hex << this << "] Destructor" << endl;
    }
    Moveable(const Moveable &m) : i(new int(*m.i)) {
        cout << "[" << hex << this << "] Copied" << endl;
    }
    Moveable(Moveable &&m) : i(m.i) {
        m.i = nullptr;
        cout << "[" << hex << this << "] Moved" << endl;
    }
    int *i;
};

int main() {
    Moveable a;
    cout << dec << *a.i << " @" << a.i << endl;
    Moveable c(move(a));
    cout << dec << *c.i << " @" << c.i << endl;
    // cout << dec << *a.i << " @" << a.i << endl;  // Runtime error

    return 0;
}
