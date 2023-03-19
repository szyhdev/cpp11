#include <iostream>

using namespace std;

template <typename T1, typename T2 = int>
class DefClass1;

// Compile error
// template <typename T1 = int, typename T2>
// class DefClass2;

template <typename T, int i = 0>
class DefClass3;

// Compile error
// template <int i = 0, typename T>
// class DefClass4;

template <typename T1, typename T2 = int>
void DefFunc1(T1 a, T2 b) {
}

template <typename T1 = int, typename T2>
void DefFunc2(T1 a, T2 b) {
}

template <typename T, int i = 0>
void DefFunc3(T a) {
    cout << i << endl;
}

template <int i = 0, typename T>
void DefFunc4(T a);

int main() {
    DefFunc1(3.2, 1);
    DefFunc1(3.2, 'a');
    DefFunc2(1, 3.2);
    DefFunc2('a', 2);
    DefFunc3(3.2);
    DefFunc3('a');
    DefFunc3<double, 56>(3.2);
    DefFunc3<char, 78>('a');

    return 0;
}
