#include <iostream>

using namespace std;

class HasPtrMem {
public:
    HasPtrMem() : d(new int(123)) {
        cout << "[" << hex << this << "] constructor: " << ++n_cstr << endl;
    }
    HasPtrMem(const HasPtrMem &h) : d(new int(*h.d)) {
        cout << "[" << hex << this << "] copy constructor: " << ++n_cptr << endl;
    }
    ~HasPtrMem() {
        cout << "[" << hex << this << "] destructor: " << ++n_dstr << endl;
        delete d;
    }
    int *d;
    static int n_cstr;
    static int n_cptr;
    static int n_dstr;
};

int HasPtrMem::n_cstr = 0;
int HasPtrMem::n_cptr = 0;
int HasPtrMem::n_dstr = 0;

HasPtrMem GetTemp() {
    return HasPtrMem();
}

int main() {
    HasPtrMem a = GetTemp();

    return 0;
}
