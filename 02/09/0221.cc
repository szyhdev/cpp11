#include <iostream>

using namespace std;

// #define UNIT_TEST

#ifdef UNIT_TEST
#define private public
#endif

class Defender {
public:
    void Defence(int x, int y) {
    }
    void Tackle(int x, int y) {
    }
private:
    int pos_x = 15;
    int pos_y = 0;
    int speed = 2;
    int stamina = 120;
};

class Attacker {
public:
    void Move(int x, int y) {
    }
    void SpeedUp(float ratio) {
    }
private:
    int pos_x = 0;
    int pos_y = -30;
    int speed = 3;
    int stamina = 100;
};

#ifdef UNIT_TEST
class Validator {
public:
    void Validate(int x, int y, Defender &d) {
        cout << "DefenderTest OK" << endl;
    }
    void Validate(int x, int y, Attacker &a) {
        cout << "AttackerTest OK" << endl;
    }
};
#endif

int main() {
    Defender d;
    Attacker a;
    a.Move(15, 30);
    d.Defence(15, 30);
    a.SpeedUp(1.5f);
    d.Defence(15, 30);
#ifdef UNIT_TEST
    Validator v;
    v.Validate(7, 0, d);
    v.Validate(1, -10, a);
#endif

    return 0;
}
