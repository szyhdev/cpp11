#include <iostream>
#include <vector>
#include <deque>
#include <initializer_list>

using namespace std;

class MyData {
public:
    MyData& operator [](initializer_list<int> l) {
        for (auto i = l.begin(); i != l.end(); i++) {
            idx.push_back(*i);
        }
        return *this;
    }
    MyData& operator =(int value) {
        if (idx.empty() != true) {
            for (auto i = idx.begin(); i != idx.end(); i++) {
                data.resize((*i > (int)data.size()) ? *i : data.size());
                data[*i - 1] = value;
            }
            idx.clear();
        }
        return *this;
    }
    void Print() {
        for (auto i = data.begin(); i != data.end(); i++) {
            cout << *i << " ";
        }
        cout << endl;
    }

private:
    vector<int> idx;
    vector<int> data;
};

vector<int> Func1() {
    return { 3, 5 };
}

deque<int> Func2() {
    return { 1, 4 };
}

const vector<int> Func3() {
    return { 2, 8 };
}

template <typename T>
void Print(const T &v) {
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
}

int main() {
    MyData md;
    md[{ 2, 3, 5 }] = 7;
    md[{ 1, 4, 5, 8 }] = 4;
    md.Print();
    cout << endl;

    vector<int> v = Func1();
    Print<vector<int>>(v);
    deque<int> d = Func2();
    Print<deque<int>>(d);
    const vector<int> &vr = Func3();
    Print<vector<int>>(vr);

    return 0;
}
