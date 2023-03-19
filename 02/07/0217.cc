#include <iostream>

using namespace std;

struct Mem {
    Mem() {
    }
    Mem(int i) : m(i) {
    }
    int m;
};

class Group {
public:
    Group() {
    }
    Group(int a) : data(a) {
    }
    Group(Mem m) : mem(m) {
    }
    Group(int a, Mem m, string n) : data(a), mem(m), name(n) {
    }
    void Print() {
        cout << data << ", " << mem.m << ", " << name << endl;
    }
private:
    int data = 1;
    Mem mem { 0 };
    string name { "Group" };
};

int main() {
    Group group1;
    group1.Print();

    Group group2(2);
    group2.Print();

    Mem m1(100);
    Group group3(m1);
    group3.Print();

    Mem m2(101);
    Group group4(3, m2, "New Group");
    group4.Print();

    return 0;
}
