#include <cassert>
#include <cstring>
#include <iostream>

#include <complex.h>
// #include <bits/cmathcalls.h">
// #ifndef _COMPLEX_H_
// #error "Never use <bits/cmathcalls.h> directly; include <complex.h> instead"
// #endif

using namespace std;

char *ArrayAlloc(int n) {
    assert(n > 0);
    return new char[n];
}

int main() {
    // char *a = ArrayAlloc(0);
    char *a = ArrayAlloc(64);
    strcpy(a, "assert at runtime/preprocess-time");
    cout << a << endl;
    delete [] a;

    return 0;
}
