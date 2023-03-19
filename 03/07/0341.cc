#include <iostream>

using namespace std;

union T {
    string s;
    int n;
};

int main() {
    // T t;  // Compile error

    return 0;
}
