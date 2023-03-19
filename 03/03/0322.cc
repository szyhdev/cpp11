#include <iostream>

using namespace std;

class HugeMem {
public:
    HugeMem(int size) : sz(size > 0 ? size : 0) {
        c = new int[sz];
        //cout << "[" << hex << this << "] HugeMem Constructor" << endl;
    }
    ~HugeMem() {
        delete [] c;
        //cout << "[" << hex << this << "] HugeMem Destructor" << endl;
    }
    HugeMem(HugeMem&& hm) : sz(hm.sz), c(hm.c) {
        hm.c = nullptr;
        //cout << "[" << hex << this << "] HugeMem Moved" << endl;
    }
    int sz;
    int *c;
};

class Moveable {
public:
    Moveable() : i(new int(123)), h(1024) {
        cout << "[" << hex << this << "] Moveable Constructor" << endl;
    }
    ~Moveable() {
        delete i;
        cout << "[" << hex << this << "] Moveable Destructor" << endl;
    }
    Moveable(Moveable &&m) : i(m.i), h(move(m.h)) {
        m.i = nullptr;
        cout << "[" << hex << this << "] Moveable Moved" << endl;
    }
    int *i;
    HugeMem h;
};

Moveable GetTemp() {
    Moveable tmp = Moveable();
    cout << hex << "Huge mem from " << __func__ << " @" << tmp.h.c << endl;
    return tmp;
}

int main() {
    Moveable a(GetTemp());
    cout << hex << "Huge mem from " << __func__ << "    @" << a.h.c << endl;

    return 0;
}
