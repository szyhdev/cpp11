#include <iostream>

using namespace std;

int positive(const int n) {
    // static_assert(n > 0, "value must > 0");

    return true;
}

int main() {
    positive(8);

    return 0;
}
