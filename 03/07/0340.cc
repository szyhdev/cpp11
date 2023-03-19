#include <iostream>

using namespace std;

union T {
    int x;
    double d;
    char b[sizeof(double)];
};

int main() {
    T t = { 0 };
    cout << t.x << endl;
    cout << t.d << endl;
    for (size_t i = 0; i < sizeof(t.b); i++) {
        cout << ((t.b[i] == '\0') ? "0" : "-") << " ";
    }
    cout << endl;

    return 0;
}
