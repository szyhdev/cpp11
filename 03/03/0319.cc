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
    HasPtrMem(HasPtrMem &&h) : d(h.d) {
        cout << "[" << hex << this << "] move constructor: " << ++n_mvtr << endl;
        h.d = nullptr;
    }
    ~HasPtrMem() {
        cout << "[" << hex << this << "] destructor: " << ++n_dstr << endl;
        delete d;
    }
    int *d;
    static int n_cstr;
    static int n_cptr;
    static int n_mvtr;
    static int n_dstr;
};

int HasPtrMem::n_cstr = 0;
int HasPtrMem::n_cptr = 0;
int HasPtrMem::n_mvtr = 0;
int HasPtrMem::n_dstr = 0;

HasPtrMem GetTemp() {
    HasPtrMem h;
    cout << "[" << hex << &h << "] Resource from " << __func__ << ": " << hex << h.d << endl;
    return h;
}

int main() {
    HasPtrMem a = GetTemp();
    cout << "[" << hex << &a << "] Resource from " << __func__ << ": " << hex << a.d << endl;

    return 0;
}
