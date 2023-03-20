#include <iostream>

using namespace std;

#define Max1(a, b) ((a) > (b)) ? (a) : (b)
#define Max2(a, b) ({ \
    auto _a = (a); \
    auto _b = (b); \
    (_a > _b) ? _a : _b; \
})

int main() {
    int m1 = Max1(1 * 2 * 3 * 4, 5 + 6 + 7 + 8);
    int m2 = Max2(1 * 2 * 3 * 4, 5 + 6 + 7 + 8);
    cout << "m1 = " << m1 << endl;
    cout << "m2 = " << m2 << endl;
    cout << endl;

    int i1 = 3, j1 = 5;
    int i2 = 3, j2 = 5;
    int m3 = Max1(i1++, j1++);
    int m4 = Max2(i2++, j2++);
    cout << "m3 = " << m3 << endl;
    cout << "m4 = " << m4 << endl;

    return 0;
}
