#include <iostream>

using namespace std;

namespace ns_adl {
    struct A {
    };
    void ADLFunc(A a) {
        cout << "ns_adl::ADLFunc()" << endl;
    }
};

int main() {
    ns_adl::A a;
    ADLFunc(a);

    return 0;
}
