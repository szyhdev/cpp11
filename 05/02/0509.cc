// valgrind --leak-check=full ./bazel-bin/05/02/0509

#include <iostream>
#include <memory>

using namespace std;

void Check(weak_ptr<int> &wp) {
    shared_ptr<int> sp = wp.lock();
    if (sp != nullptr) {
        cout << "pointer is still valid: " << *sp << endl;
    }
    else {
        cout << "pointer is invalid" << endl;
    }
}

int main() {
    shared_ptr<int> sp1(new int(22));
    shared_ptr<int> sp2 = sp1;
    weak_ptr<int> wp = sp1;

    cout << *sp1 << endl;
    cout << *sp2 << endl;
    Check(wp);
    cout << wp.use_count() << endl;
    cout << endl;

    sp1.reset();
    cout << *sp2 << endl;
    Check(wp);
    cout << wp.use_count() << endl;
    cout << endl;

    sp2.reset();
    Check(wp);
    cout << wp.use_count() << endl;

    return 0;
}
