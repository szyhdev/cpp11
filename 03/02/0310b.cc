#include <iostream>

using namespace std;

class Info {
public:
    Info() {
        InitRest();
    }
    Info(int i) {
        new (this) Info();
        type = i;
        cout << "  After new (this): " << type << ", " << name << endl;
    }
    Info(char c) {
        new (this) Info();
        name = c;
        cout << "  After new (this): " << type << ", " << name << endl;
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
