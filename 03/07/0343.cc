#include <cstring>
#include <iostream>

using namespace std;

#pragma pack(1)

struct Student {
    Student(bool g, int a) : gender(g), age(a) {
    }
    bool gender;
    int age;
};

class Singer {
public:
    enum Type {
        STUDENT, NATIVE, FOREIGNER
    };
    Singer(bool g, int a) : s(g, a) {
        t = STUDENT;
    }
    Singer(int i) : id(i) {
        t = NATIVE;
    }
    Singer(const char *n, int s) {
        int size = (s > 9) ? 9 : s;
        memcpy(name, n, size);
        name[s] = '\0';
        t = FOREIGNER;
    }
    ~Singer() {
    }
    void print() {
        if (t == STUDENT) {
            cout << t << ": (" << s.gender << ", " << s.age << ")" << endl;
        } else if (t == NATIVE) {
            cout << t << ": " << id << endl;
        } else if (t == FOREIGNER) {
            cout << t << ": " << name << endl;
        }
    }

private:
    Type t;
    union {
        Student s;
        int id;
        char name[10];
    };
};

#pragma pack()

int main() {
    Singer s1(true, 13);
    s1.print();
    cout << sizeof(s1) << endl;

    Singer s2(310217);
    s2.print();
    cout << sizeof(s2) << endl;

    Singer s3("J Michael", 9);
    s3.print();
    cout << sizeof(s3) << endl;

    return 0;
}
