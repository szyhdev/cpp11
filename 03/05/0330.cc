#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>

using namespace std;

enum Gender {
    boy,
    girl
};

class People {
public:
    People(initializer_list<pair<string, Gender>> l) {
        auto i = l.begin();
        for (; i != l.end(); i++) {
            data.push_back(*i);
        }
    }

    void print() {
        for (auto e: data) {
            cout << "(" << e.first << ", " << e.second << ") ";
        }
        cout << endl;
    }

private:
    vector<pair<string, Gender>> data;
};

int main() {
    People ship2012 { { "Garfield", boy }, { "HelloKitty", girl } };
    ship2012.print();

    return 0;
}
