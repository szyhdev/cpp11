#include <iostream>

using namespace std;

class Info {
public:
    Info() : type(1), name('a') {
        InitRest();
    }
    Info(int i) : type(i), name('a') {
        InitRest();
    }
    Info(char c) : type(1), name(c) {
        InitRest();
    }

private:
    void InitRest() {
        cout << "InitRest: " << type << ", " << name << endl;
    }
    int type;
    char name;
};

int main() {
    Info info1;
    Info info2(123);
    Info info3('z');

    return 0;
}
