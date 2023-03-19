#include <iostream>

using namespace std;

class Info {
public:
    Info() : Info(1) {
    }
    Info(int i) : Info(i, 'a') {
    }
    Info(char c) : Info(1, c) {
    }

private:
    Info(int i, char c) : type(i), name(c) {
        cout << "Info(int i, char c): " << type << ", " << name << endl;
    }

public:
    int type;
    char name;
};

struct Test {
    int i;
    char c;
    Test() : Test(2) {
    }
    Test(int i) : Test('c') {
    }
    // Test(char c) : Test(2) {  // VSCode editor error
    Test(char c) {
    }
};

int main() {
    Info info1;
    Info info2(123);
    Info info3('z');

    // Test test;  // Runtime error
    // cout << test.i << ", " << test.c << endl;

    return 0;
}
