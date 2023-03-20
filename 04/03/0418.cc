#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(8);

    typedef decltype(vec.begin()) vectype;
    for (vectype i = vec.begin(); i < vec.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    for (decltype(vec)::iterator i = vec.begin(); i < vec.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}
