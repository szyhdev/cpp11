#include <iostream>
#include <typeinfo>

using namespace std;

class PI {
public:
    // float operator *(float v) {
    //     return (float)val * v;
    // }
    double operator *(float v) {
        return (double)val * v;
    }
    const float val = 3.1415927f;
};

int main() {
    float radius = 1.7e10;
    PI pi;
    auto circumference = 2 * (pi * radius);
    cout << typeid(circumference).name() << endl;
    cout << circumference << endl;

    return 0;
}
