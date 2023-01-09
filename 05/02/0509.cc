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
    cout << sp1.use_count() << endl;
    cout << endl;

    sp1.reset();
    cout << *sp2 << endl;
    Check(wp);
    cout << endl;

    sp2.reset();
    Check(wp);

    return 0;
}

