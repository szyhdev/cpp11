#include <iostream>
#include <algorithm>

using namespace std;

void action1(int &e) {
    e *= 2;
}

void action2(int &e) {
    cout << e << " ";
}

int main() {
    int arr[5] = {
        1, 2, 3, 4, 5
    };
    for_each(arr, arr + sizeof(arr) / sizeof(arr[0]), action1);
    for_each(arr, arr + sizeof(arr) / sizeof(arr[0]), action2);
    cout << endl;

    return 0;
}
