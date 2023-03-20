#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T1, typename T2>
void Sum(T1 &t1, T2 &t2, decltype(t1 + t2) &s) {
    cout << "Non-array version" << endl;
    s = t1 + t2;
}

void Sum(int a[], int b[], int c[]) {
    cout << "Array version" << endl;
    int idx = 0;
    while ((a[idx] != 0) && (b[idx] != 0)) {
        c[idx] = a[idx] + b[idx];
        idx++;
    }
}

int main()
{
    int a[5] { 1, 2, 3, 4, 0 };
    int b[5] { 2, 4, 6, 8, 0 };
    int c[5];
    Sum(a, b, c);
    for (auto e: c) {
        cout << e << " ";
    }
    cout << endl << endl;

    int d = 1, e = 2, f;
    Sum(d, e, f);
    cout << f << endl;

    return 0;
}
