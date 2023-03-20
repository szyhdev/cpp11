#include <iostream>
#include <type_traits>

using namespace std;

int &&RvalRef() {
    static int i = 123;
    return std::move(i);
}

int main() {
    int i;
    int arr[5] = { 0 };
    int *ptr = arr;

    cout << is_rvalue_reference<decltype(RvalRef())>::value << endl;
    cout << endl;

    cout << is_lvalue_reference<decltype(true ? i : i)>::value << endl;
    cout << is_lvalue_reference<decltype((i))>::value << endl;
    cout << is_lvalue_reference<decltype(++i)>::value << endl;
    cout << is_lvalue_reference<decltype(arr[3])>::value << endl;
    cout << is_lvalue_reference<decltype(*ptr)>::value << endl;
    cout << is_lvalue_reference<decltype("lval")>::value << endl;
    cout << endl;

    cout << is_lvalue_reference<decltype(i++)>::value << endl;
    cout << is_rvalue_reference<decltype(++i)>::value << endl;

    return 0;
}
