#include <iostream>
#include <list>
#include <vector>
#include <deque>

using namespace std;

class TDConstructed {
private:
    template <class T> TDConstructed(T first, T last) : l(first, last) {  // Common template constructor
    }
    template <class T> void TDConstructedFunc(T first, T last) {  // Common template function
        cout << "TDConstructedFunc" << endl;
        l.assign(first, last);
    }
    list<int> l;

public:
    TDConstructed(vector<short>& v) : TDConstructed(v.begin(), v.end()) {  // Constructor using vector
    }
    TDConstructed(deque<int>& d) : TDConstructed(d.begin(), d.end()) {  // Constructor using deque
    }
    TDConstructed(list<int>& l) {  // Constructor using list
        TDConstructedFunc(l.begin(), l.end());  // calling common template function
    }
    const list<int>& get_list() {
        return l;
    }
    void print_list() {
        for (auto element: l) {
            cout << element << " ";
        }
        cout << endl;
    }
};

int main() {
    int ints[] = { 34, 5, 43, 12 };

    vector<short> v(ints, ints + sizeof(ints) / sizeof(ints[0]));
    TDConstructed from_v(v);
    from_v.print_list();
    cout << endl;

    deque<int> d(ints, ints + sizeof(ints) / sizeof(ints[0]));
    TDConstructed from_d(d);
    from_d.print_list();
    cout << endl;

    list<int> l(ints, ints + sizeof(ints) / sizeof(ints[0]));
    TDConstructed from_l(l);
    from_l.print_list();

    return 0;
}
