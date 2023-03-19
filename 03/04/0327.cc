#include <iostream>

using namespace std;

template <typename T>
class Ptr {
public:
    Ptr(T *p): _p(p) {
    }
    operator bool() const {
    // explicit operator bool() const {
        if (_p != 0) {
            return true;
        } else {
            return false;
        }
    }

private:
    T *_p;
};

int main() {
    int a;
    Ptr<int> p(&a);
    if (p) {
        cout << "valid pointer" << endl;
    } else {
        cout << "invalid pointer" << endl;
    }

    Ptr<double> pd(0);
    if (pd) {
        cout << "valid pointer" << endl;
    } else {
        cout << "invalid pointer" << endl;
    }

    cout << p + pd << endl;
    if (p || pd) {
        cout << "boolean context is allowable" << endl;
    }

    return 0;
}
