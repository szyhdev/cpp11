#include <iostream>
#include <initializer_list>

using namespace std;

void Func(initializer_list<int> iv) {
    for (auto e: iv) {
        cout << e << " ";
    }
    cout << endl;
}

int main() {
    Func({ 2, 5, 8 });
    Func({});

    return 0;
}
