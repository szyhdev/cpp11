#include <iostream>

using namespace std;

class Info {
public:
    Info() {
        InitRest();
    }
    // Info(int i) : Info(), type(i) {  // Compile error
    // }
    Info(int i) : Info() {
        type = i;
        cout << "  After Info(): " << type << ", " << name << endl;
    }
    // Info(char c) : Info(), name(c) {  // Compile error
    // }
    Info(char c) : Info() {
        name = c;
        cout << "  After Info(): " << type << ", " << name << endl;
    }

private:
    void InitRest() {
        cout << "InitRest: " << type << ", " << name << endl;
    }

public:
    int type { 1 };
    char name { 'a' };
};

int main() {
    Info info1;
    Info info2(123);
    Info info3('z');

    return 0;
}
