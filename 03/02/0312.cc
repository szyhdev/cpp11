#include <iostream>

using namespace std;

class Info {
public:
    Info() : Info(1, 'a') {
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

int main() {
    Info info1;
    Info info2(123);
    Info info3('z');

    return 0;
}
