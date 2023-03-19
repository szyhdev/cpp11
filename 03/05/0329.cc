#include <iostream>
#include <vector>
#include <map>

using namespace std;

void print_array(int ar[], int size) {
    for (int i = 0; i < size; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
}

void print_vector(const vector<int> &v) {
    for (auto e: v) {
        cout << e << " ";
    }
    cout << endl;
}

void print_map(const map<int, float> &m) {
    for (auto e: m) {
        cout << "(" << e.first << ", " << e.second << ") ";
    }
    cout << endl;
}

int main() {
    int a[] = { 1, 3, 5 };
    print_array(a, sizeof(a) / sizeof(a[0]));

    int b[] { 2, 4, 6 };
    print_array(b, sizeof(b) / sizeof(b[0]));

    vector<int> v { 1, 3, 5 };
    print_vector(v);

    map<int, float> m = { { 1, 1.1f }, { 3, 2.2f }, { 5, 3.3f } };
    print_map(m);

    return 0;
}
