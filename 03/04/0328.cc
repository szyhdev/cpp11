#include <iostream>
#include <boost/core/ignore_unused.hpp>

using namespace std;
using namespace boost;

class ConvertTo {
};

class Convertable {
public:
    explicit operator ConvertTo () const {
        cout << "explicit ConvertTo" << endl;
        return ConvertTo();
    }
};

void Func(ConvertTo ct) {
}

int main() {
    Convertable c;
    ConvertTo ct1(c);
    // ConvertTo ct2 = c;  // Compile error
    ConvertTo ct3 = static_cast<ConvertTo>(c);
    ignore_unused(ct3);
    // Func(c);  // Compile error

    return 0;
}
