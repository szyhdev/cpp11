#include <iostream>
#include <cassert>

using namespace std;

// #define UNIT_TEST

template <typename T>
class DefenderT {
public:
    friend T;
    void Defence(int x, int y) {
        pos_x = x;
        pos_y = y;
    }
    void Tackle(int x, int y) {
        pos_x = x;
        pos_y = y;
    }
private:
    int pos_x = 15;
    int pos_y = 0;
    int speed = 2;
    int stamina = 120;
};

template <typename T>
class AttackerT {
public:
    friend T;
    void Move(int x, int y) {
        pos_x = x;
        pos_y = y;
    }
    void SpeedUp(float ratio) {
        speed *= ratio;
    }
private:
    int pos_x = 0;
    int pos_y = -30;
    int speed = 3;
    int stamina = 100;
};

using Defender = DefenderT<int>;
using Attacker = AttackerT<int>;

#ifdef UNIT_TEST
class Validator;

using DefenderTest = DefenderT<Validator>;
using AttackerTest = AttackerT<Validator>;

class Validator {
public:
    void Validate(int x, int y, DefenderTest &d) {
        assert(x == d.pos_x);
        assert(y == d.pos_y);
        cout << "(" << d.pos_x << ", " << d.pos_y << ")" << endl;
        cout << "DefenderTest OK" << endl;
    }
    void Validate(int x, int y, AttackerTest &a) {
        assert(x == a.pos_x);
        assert(y == a.pos_y);
        cout << "(" << a.pos_x << ", " << a.pos_y << ")" << endl;
        cout << "AttackerTest OK" << endl;
    }
};
#endif

int main() {
#ifdef UNIT_TEST
    DefenderTest d;
    AttackerTest a;
    a.Move(15, 30);
    d.Defence(15, 30);
    a.SpeedUp(1.5f);
    d.Defence(15, 30);
    Validator v;
    v.Validate(15, 30, d);
    v.Validate(15, 30, a);
#endif

    return 0;
}
