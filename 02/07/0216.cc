#include <iostream>

using namespace std;

struct Mem {
    Mem() {
        cout << "Mem default, num: " << num << endl;
    }
    Mem(int i) : num(i) {
        cout << "Mem, num: " << num << endl;
    }
    int num = 2;
};

class Group {
public:
    Group() {
        cout << "Group default, val: " << val << endl;
    }
    Group(int i) : val('G'), a(i) {
        cout << "Group, val: " << val << endl;
    }
    void NumOfA() {
        cout << "number of A: " << a.num << endl;
    }
    void NumOfB() {
        cout << "number of B: " << b.num << endl;
    }
private:
    char val { 'g' };
    Mem a;
    Mem b { 19 };
};

int main() {
    Mem member;
    cout << endl;

    Group group;
    group.NumOfA();
    group.NumOfB();
    cout << endl;

    Group group2(7);
    group2.NumOfA();
    group2.NumOfB();

    return 0;
}
