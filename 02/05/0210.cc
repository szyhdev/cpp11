#include <iostream>
#include <cstring>

using namespace std;

// static_assert(sizeof(int) == 8, "This 64-bit machine should follow this!");
static_assert(sizeof(int) == 4, "This 32-bit machine should follow this!");

template <typename T, typename U>
void bit_copy(T &a, U &b) {
    static_assert(sizeof(a) == sizeof(b), "the parameters of bit_copy must have same width.");
    memcpy(&a, &b, sizeof(b));
}

int main() {
    int a2 = 0x2468;
    // double b2;
    // bit_copy(b2, a2);
    int c2;
    bit_copy(c2, a2);
    cout << "0x" << hex << c2 << endl;

    return 0;
}
