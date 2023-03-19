#include <cstring>
#include <iostream>
#include <boost/static_assert.hpp>

using namespace std;
using namespace boost;

#define assert_static(e) \
    do { \
        enum { assert_static__ = 1 / (e) }; \
    } while (0)

template <typename T, typename U>
void bit_copy_1(T &a, U &b) {
    BOOST_STATIC_ASSERT(sizeof(a) == sizeof(b));
    memcpy(&a, &b, sizeof(b));
}

template <typename T, typename U>
void bit_copy_2(T &a, U &b) {
    assert_static(sizeof(a) == sizeof(b));
    memcpy(&a, &b, sizeof(b));
}

int main() {
    int a1 = 0x2468;
    // double b1;
    // bit_copy_1(b1, a1);
    int c1;
    bit_copy_1(c1, a1);
    cout << "0x" << hex << c1 << endl;

    int a2 = 0x2468;
    // double b2;
    // bit_copy_2(b2, a2);
    int c2;
    bit_copy_2(c2, a2);
    cout << "0x" << hex << c2 << endl;

    return 0;
}
