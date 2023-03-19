#include <iostream>

using namespace std;

union T {
    string s;
    int n;
public:
    T() {
        new (&s) string("abcd");
    }
    ~T() {
        s.~string();
    }
};

int main() {
    T t;
    cout << t.s << endl;
    cout << hex << t.n << endl;
    // cout << hex << *(((int*)&t.n) + 4) << endl;  // "abcd"

    return 0;
}
