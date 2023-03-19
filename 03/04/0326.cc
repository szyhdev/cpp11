#include <iostream>
#include <boost/core/ignore_unused.hpp>

using namespace std;
using namespace boost;

struct Rational1 {
    Rational1(int n = 0, int d = 1) : num(n), den(d) {
        cout << __func__ << "(" << num << "/" << den << ")" << endl;
    }
    int num;
    int den;
};

struct Rational2 {
    explicit Rational2(int n = 0, int d = 1) : num(n), den(d) {
        cout << __func__ << "(" << num << "/" << den << ")" << endl;
    }
    int num;
    int den;
};

void Display1(Rational1 ra) {
    cout << "Display1: num = " << ra.num << ", den = " << ra.den << endl;
}

void Display2(Rational2 ra) {
    cout << "Display2: num = " << ra.num << ", den = " << ra.den << endl;
}

int main() {
    Rational1 r1_1 = 11;
    ignore_unused(r1_1);
    Rational1 r1_2(12);
    // Rational2 r2_1 = 21;  // Compile error
    Rational2 r2_2(22);
    cout << endl;

    Display1(1);
    Display1(Rational1(1));
    // Display2(2);  // Compile error
    Display2(Rational2(2));

    return 0;
}
