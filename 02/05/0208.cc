#include <cassert>
#include <cstring>
#include <iostream>

using namespace std;

template <typename T, typename U>
void bit_copy(T &a, U &b) {
    assert(sizeof(a) == sizeof(b));
    memcpy(&a, &b, sizeof(b));
}

int main() {
    int a = 0x2468;
    // double b;
    // bit_copy(b, a);
    int c;
    bit_copy(c, a);
    cout << "0x" << hex << c << endl;

    return 0;
}
