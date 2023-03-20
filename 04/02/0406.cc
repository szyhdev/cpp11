#include <iostream>
#include <vector>
#include <string>

using namespace std;

void loopover(vector<string> &vs) {
    for (auto i = vs.begin(); i != vs.end(); i++) {
        cout << *i << endl;
    }
}

int main() {
    vector<string> names { "Tom", "Jerry" };
    loopover(names);

    return 0;
}
