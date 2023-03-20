#include <type_traits>
#include <iostream>

using namespace std;

int main()
{
    int i;
    int &j = i;
    int *p = &i;
    const int k = 1;

    decltype(i) &var1 = i;
    decltype(j) &var2 = i;
    cout << is_lvalue_reference<decltype(var1)>::value << endl;
    cout << is_rvalue_reference<decltype(var2)>::value << endl;
    cout << is_lvalue_reference<decltype(var2)>::value << endl;
    cout << endl;

    //decltype(p) *var3 = &i;  // Complie error
    decltype(p) *var3 = &p;
    cout << "type of 'decltype(p) *' " <<
            ((typeid(var3).hash_code() == typeid(int **).hash_code()) ? "==" : "!=") <<
            " int **" << endl;
    auto *var4 = p;
    var4 = &i;
    cout << "type of 'auto * = p' " <<
            ((typeid(var4).hash_code() == typeid(int **).hash_code()) ? "==" : "!=") <<
            " int **" << endl;
    cout << "type of 'auto * = p' " <<
            ((typeid(var4).hash_code() == typeid(int *).hash_code()) ? "==" : "!=") <<
            " int *" << endl;
    cout << endl;

    const decltype(k) var5 = 1;
    cout << "type of 'const decltype(const int)' " <<
            ((typeid(var5).hash_code() == typeid(const int).hash_code()) ? "==" : "!=") <<
            " const int" << endl;

    return 0;
}
