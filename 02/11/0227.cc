#include <iostream>
#include <typeinfo>

using namespace std;

void DefParm(int m = 3) {
    cout << "DefParm: m = " << m << endl;
}

template <typename T = int>
class DefClass {
public:
    void print() {
        cout << "DefClass: typeid = " << typeid(T).name() << endl;
    }
};

#if __cplusplus >= 201103L
template <typename T = int>
void DefTempParm() {
    cout << "DefTempParm: typeid = " << typeid(T).name() << endl;
};
#endif

int main() {
    DefParm();
    DefClass<> dc1;
    dc1.print();
    DefClass<double> dc2;
    dc2.print();

#if __cplusplus >= 201103L
    DefTempParm();
    DefTempParm<char>();
#endif

    return 0;
}
