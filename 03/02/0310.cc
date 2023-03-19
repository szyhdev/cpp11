#include <iostream>

using namespace std;

class Info {
public:
    Info() {
        InitRest();
    }
    Info(int i) : type(i) {
        InitRest();
    }
    Info(char c) : name(c) {
        InitRest();
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
