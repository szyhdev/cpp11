// valgrind --leak-check=full ./bazel-bin/05/02/0511

#include <iostream>

using namespace std;

int main() {
    int *p = new int;

    int *q = (int *)(reinterpret_cast<long long>(p) ^ 2012);
    q = (int *)(reinterpret_cast<long long>(q) ^ 2012);
    *q = 10;
    cout << *q << endl;

    delete p;

    return 0;
}
