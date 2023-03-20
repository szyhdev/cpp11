#include <iostream>
#include <typeinfo>

using namespace std;

class White {
};

class Black {
};

int main() {
    White a;
    Black b;
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << endl;

    White c;
    bool a_b_same_type = (typeid(a).hash_code() == typeid(b).hash_code());
    bool a_c_same_type = (typeid(a).hash_code() == typeid(c).hash_code());
    cout << "Same type?" << endl;
    cout << "a and b? " << (int)a_b_same_type << endl;
    cout << "a and c? " << (int)a_c_same_type << endl;

    return 0;
}
