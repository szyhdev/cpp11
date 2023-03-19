#include <iostream>

using namespace std;

class Info1 {
public:
    Info1() {
        InitRest();
        cout << "Info1(): " << type << ", " << name << endl;
    }
    Info1(int i) : Info1() {
        type = i;
        cout << "Info1(int i): " << type << ", " << name << endl;
    }

private:
    void InitRest() {
        type += 1;
        cout << "InitRest(int i, char c): " << type << ", " << name << endl;
    }

public:
    int type { 1 };
    char name { 'a' };
};

class Info2 {
public:
    Info2() : Info2(1, 'a') {
        cout << "Info1(): " << type << ", " << name << endl;
    }
    Info2(int i) : Info2(i, 'a') {
        cout << "Info2(int i): " << type << ", " << name << endl;
    }

private:
    Info2(int i, char c) : type(i), name(c) {
        type += 1;
        cout << "Info(int i, char c): " << type << ", " << name << endl;
    }

public:
    int type;
    char name;
};

int main() {
    Info1 info1(3);
    cout << endl;
    Info2 info2(3);

    return 0;
}
