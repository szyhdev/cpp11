#include <iostream>

using namespace std;

template <typename T>
void TempFunc(T a) {
    cout << a << endl;
}

int main() {
    TempFunc(123);
    TempFunc("abc");

    return 0;
}
