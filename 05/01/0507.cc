#include <iostream>

using namespace std;

// Compile error
// enum class {
//    General, Light, Medium, Heavy
// } weapon;
enum class Weapon {
    General, Light, Medium, Heavy
} weapon;

int main() {
    // weapon = General;  // Compile error
    weapon = Weapon::General;  // Compile error
    bool b = !(weapon == Weapon::General);
    cout << "It is" << (b ? " " : " not ") << "general" << endl;

    return 0;
}
