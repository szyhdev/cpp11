#include <iostream>
#include <typeinfo>

using namespace std;

class P {
};

template <typename T>
class People {
public:
    void print() {
        cout << typeid(T).name() << endl;
    }
    friend T;
};

People<P> PP;
People<int> Pi;

int main() {
    PP.print();
    Pi.print();

    return 0;
}
