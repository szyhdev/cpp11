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
    Moveable(Moveable &&m) : i(m.i) {
        m.i = nullptr;
        cout << "[" << hex << this << "] Moved" << endl;
    }
    Moveable& operator =(Moveable &&m) {
        i = m.i;
        m.i = nullptr;
        cout << "[" << hex << this << "] Moved operator =" << endl;
	    return *this;
    }
    int *i;
};

Moveable GetTemp() {
    Moveable tmp = Moveable();
    return tmp;
}

template <typename T>
void Swap(T& a, T& b) {
    T tmp(move(a));
    a = move(b);
    b = move(tmp);
}

int main() {
    Moveable a(GetTemp());
    cout << hex << "a.i @" << a.i << endl;
    Moveable b(GetTemp());
    cout << hex << "b.i @" << b.i << endl;
    cout << endl;

    Swap<Moveable>(a, b);

    cout << hex << "a.i @" << a.i << endl;
    cout << hex << "b.i @" << b.i << endl;

    return 0;
}
