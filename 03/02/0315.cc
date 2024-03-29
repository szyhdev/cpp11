#include <iostream>

using namespace std;

class DCExcept {
public:
    DCExcept(double d)
        try : DCExcept(1, d) {
            cout << "Run the body." << endl;
        }
        catch (...) {
            cout << "Exception caught" << endl;
        }

private:
    DCExcept(int i, double d) {
        cout << "Going to throw..." << endl;
        throw 0;
    }
    int type;
    double data;
};

int main() {
    DCExcept a(1.2);

    return 0;
}
