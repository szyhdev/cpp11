#include <iostream>

using namespace std;

class Info {
public:
    Info() {
        InitRest();
    }
    Info(int i) : type(i) {
        // this->Info();  // Compile error
        InitRest();
        type = i;
    }
    Info(char c) : name(c) {
        // this->Info();  // Compile error
        InitRest();
        name = c;
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
