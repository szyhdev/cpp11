#include <iostream>
#include <type_traits>

using namespace std;

typedef double (*func)();

int main() {
    double d = 0.1f;
    result_of<func()>::type f;

    bool b = (typeid(d).hash_code() == typeid(f).hash_code());
    cout << "type of result_of(func() " << ((b) ? "==" : "!=") << " double" << endl;

    return 0;
}
