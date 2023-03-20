#include <iostream>
#include <type_traits>

using namespace std;

int main() {
    int i = 123;

    decltype(i) a;
    cout << "is_reference<decltype(a)>::value == " << is_reference<decltype(a)>::value << endl;

    // decltype((i)) b;  // Compile error
    decltype((i)) b = i;
    cout << "is_reference<decltype(b)>::value == " << is_reference<decltype(b)>::value << endl;

    return 0;
}
