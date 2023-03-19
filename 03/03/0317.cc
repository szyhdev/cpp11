#include <iostream>

using namespace std;

class HasPtrMem {
public:
    HasPtrMem() : d(new int(123)) {
    }
    HasPtrMem(HasPtrMem& h) : d(new int(*h.d)) {
    }
    ~HasPtrMem() {
        delete d;
    }
    int *d;
};

int main() {
    HasPtrMem a;
    HasPtrMem b(a);
    cout << *a.d << endl;
    cout << *b.d << endl;

    return 0;
}
