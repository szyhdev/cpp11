#include <iostream>

using namespace std;

#pragma pack(1)

struct Student {
    Student(bool g, int a) : gender(g), age(a) {
    }
    void func() {
        cout << gender << ", " << age << endl;
    }
    bool gender;
    int age;
};

struct Student2 {
    void func() {
        cout << dec << gender << ", " << age << endl;
    }
    bool gender;
    int age;
};

union T {
    // Student s;  // Compile error
    Student2 s2;
    int id;
    char name[10];
};

#pragma pack()

int main() {
    T t;
    cout << hex << &t << endl;
    cout << hex << &(t.s2) << endl;
    cout << hex << &(t.s2.gender) << endl;
    cout << hex << &(t.s2.age) << endl;
    cout << hex << &(t.id) << endl;
    cout << hex << &(t.name) << endl;
    cout << endl;

    t.s2.gender = false;
    t.s2.age = 96;
    t.s2.func();

    cout << t.id << endl;
    for (size_t i = 0; i < sizeof(t.name); i++) {
        cout << dec << (int)t.name[i] << " ";
    }
    cout << endl;
    cout << dec << sizeof(t) << endl;

    return 0;
}

