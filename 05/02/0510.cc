// valgrind --leak-check=full ./bazel-bin/05/02/0510

#include <iostream>

using namespace std;

int main() {
    int *p = new int;
    p += 10;
    p -= 10;
    *p = 10;
    cout << *p << endl;
    delete p;

    return 0;
}
