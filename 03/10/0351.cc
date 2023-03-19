#include <iostream>
#include <type_traits>
#include <map>

using namespace std;

using uint = unsigned int;
typedef unsigned int UINT;
using sint = int;

template <typename T>
using MapString = map<T, const char *>;

int main() {
    cout << is_same<uint, UINT>::value << endl;
    cout << endl;

    MapString<int> numberedString { { 2, "flower" }, { 1, "grass" }, { 5, "river" } };
    for (auto &e: numberedString) {
        cout << "(" << e.first << ", " << e.second << ") ";
    }
    cout << endl;

    return 0;
}
