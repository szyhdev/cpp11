#include <iostream>

using namespace std;

void Overloaded(int) {
}

void Overloaded(char) {
}

void NonOverloaded(char) {
}

int &&RvalRef() {
    static int i = 123;
    return std::move(i);
}

const bool Func(int) {
    return true;
}

int main() {
    int i;
    int arr[5] = { 0 };
    int *ptr = arr;
    struct {
        double d;
    } s;

    // rule 1
    decltype(i) var1;
    decltype(arr) var2;
    decltype(ptr) var3;
    decltype(s.d) var4;
    //decltype(Overloaded) var5;  // Compile error
    decltype(NonOverloaded) var5;
    cout << "type id of var1 == " << typeid(var1).name() << endl;
    cout << "type id of var2 == " << typeid(var2).name() << endl;
    cout << "type id of var3 == " << typeid(var3).name() << endl;
    cout << "type id of var4 == " << typeid(var4).name() << endl;
    cout << "type id of var5 == " << typeid(var5).name() << endl;
    cout << endl;

    // rule 2
    decltype(RvalRef()) var6 = 1;
    cout << "type id of var6 == " << typeid(var6).name() << endl;
    cout << "is_rvalue_reference<decltype(RvalRef())> == " <<
            is_rvalue_reference<decltype(RvalRef())>::value << endl;
    cout << endl;

    // rule 3
    decltype(true ? i : i) var7 = i;
    decltype((i)) var8 = i;
    decltype(++i) var9 = i;
    decltype(arr[3]) var10 = i;
    decltype(*ptr) var11 = i;
    decltype("lvalue") var12 = "lvalue";
    cout << "type id of var7 == " << typeid(var7).name() << ", is_lvalue_reference == " <<
            is_lvalue_reference<decltype(var7)>::value << endl;
    cout << "type id of var8 == " << typeid(var8).name() << ", is_lvalue_reference == " <<
            is_lvalue_reference<decltype(var8)>::value << endl;
    cout << "type id of var9 == " << typeid(var9).name() << ", is_lvalue_reference == " <<
            is_lvalue_reference<decltype(var9)>::value << endl;
    cout << "type id of var10 == " << typeid(var10).name() << ", is_lvalue_reference == " <<
            is_lvalue_reference<decltype(var10)>::value << endl;
    cout << "type id of var11 == " << typeid(var11).name() << ", is_lvalue_reference == " <<
            is_lvalue_reference<decltype(var11)>::value << endl;
    cout << "type id of var12 == " << typeid(var12).name() << ", is_lvalue_reference == " <<
            is_lvalue_reference<decltype(var12)>::value << endl;
    cout << endl;

    // rule 4
    decltype(1) var13;
    decltype(i++) var14;
    decltype((Func(1))) var15;
    cout << "type id of var13 = " << typeid(var13).name() << endl;
    cout << "type id of var14 = " << typeid(var14).name() << endl;
    cout << "type id of var15 = " << typeid(var15).name() << endl;

    return 0;
}
