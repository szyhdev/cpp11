#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {
        1, 2, 3, 4, 5
    };

    for (auto i = v.begin(); i != v.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;

    for (auto i: v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
