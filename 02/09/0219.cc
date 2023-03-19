#include <iostream>

using namespace std;

class Poly;

typedef Poly P;

class LiLei {
public:
    LiLei() : val(1) {
    }
private:
    int val;
friend class Poly;
};

class Jim {
public:
    Jim() : val(2) {
    }
private:
    int val;
friend Poly;
};

class HanMeiMei {
public:
    HanMeiMei() : val(3) {
    }
private:
    int val;
friend P;
};

class Poly {
public:
    void print(const LiLei &ll) {
        cout << ll.val << endl;
    }
    void print(const Jim &jim) {
        cout << jim.val << endl;
    }
    void print(const HanMeiMei &hmm) {
        cout << hmm.val << endl;
    }
};

int main() {
    Poly p;
    LiLei ll;
    p.print(ll);
    Jim jim;
    p.print(jim);
    HanMeiMei hmm;
    p.print(hmm);

    return 0;
}
