#include <iostream>

using namespace std;

void func(int a[]) {
    // for (auto e: a) {  // Compile error
    //     cout << e << endl;
    // }
}

int main() {
    int arr[5] = {
        1, 2, 3, 4, 5
    };
    func(arr);

    return 0;
}
