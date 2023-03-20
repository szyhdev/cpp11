#include <iostream>
#include <typeinfo>
#include <map>

using namespace std;

int myhash(char *name)
{
    return 0;
}

int main()
{
    // map<const char *, decltype(myhash)> dict_key;  // compile error
    map<const char *, decltype(myhash(nullptr))> dict_key1 { { "Tom", 1 }, { "Jerry", 2 } };
    cout << typeid(dict_key1).name() << endl;
    for (auto p: dict_key1) {
        cout << "(" << p.first << ", " << p.second << ")" << " ";
    }
    cout << endl;

    return 0;
}
