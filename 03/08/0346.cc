#include <iostream>

using namespace std;

struct Watt {
    unsigned int v;
};

Watt operator ""_w(unsigned long long v) {
    return { (unsigned int)v };
}

int main() {
    Watt capacity = 1024_w;
    cout << capacity.v << endl;

    return 0;
}
