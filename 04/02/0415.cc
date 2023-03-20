#include <iostream>
#include <typeinfo>

using namespace std;

// Compile error
// void func(auto x = 1) {
// }

// Compile error
// struct st {
//     auto var = 10;
// };

int main() {
    char x[3];
    cout << typeid(x).name() << endl;
    auto y = x;
    cout << typeid(y).name() << endl;

    // auto z[3] = x;  // Compile error
    // vector<auto> v = { 1 };  // Compile error

    return 0;
}
