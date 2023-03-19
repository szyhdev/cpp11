#include <iostream>

using namespace std;

struct Student {
    Student(bool g, int a) : gender(g), age(a) {
    }
    void func() {
        cout << gender << ", " << age << endl;
    }
    bool gender;
    int age;
};

union T {
    Student s;
    static int si;
    static long Get() {
        return 32;
    }
};

int T::si = 1234;

int main() {
    cout << T::si << endl;
    cout << T::Get() << endl;

    return 0;
}
