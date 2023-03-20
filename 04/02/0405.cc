#include <iostream>
#include <vector>
#include <string>

using namespace std;

void loopover(vector<string> &vs) {
    vector<string>::iterator i = vs.begin();
    for (; i != vs.end(); i++) {
        cout << *i << endl;
    }
}

int main() {
    vector<string> names { "Tom", "Jerry" };
    loopover(names);

    return 0;
}
