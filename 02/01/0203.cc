#include <iostream>

using namespace std;

struct TestStruct {
    TestStruct() : name(__func__) {
    }
    const char *name;
};

// Compile error
// void FuncFail(string func_name = __func__) {
// }

int main() {
    TestStruct ts;
    cout << ts.name << endl;

    return 0;
}
