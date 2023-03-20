#include <iostream>

using namespace std;

class OuterType {
public:
    struct InnerType {
        int i;
    };
    InnerType GetInner();
    InnerType it;
};

auto OuterType::GetInner() -> InnerType {
    return it;
}

int main() {
    OuterType ot;
    ot.it.i = 789;

    auto it = ot.GetInner();
    cout << it.i << endl;

    return 0;
}
