#include <iostream>

using namespace std;

template <typename T, typename U>
void PerfectForward(T &&t, U &Func) {
    cout << t << " forwarded..." << endl;
    Func(forward<T>(t));
}

void RunCode(double &&m) {
    cout << "RunCode" << endl;
}

void RunHome(double &&h) {
    cout << "RunHome" << endl;
}

void RunComp(double &&c) {
    cout << "RunComp" << endl;
}

int main() {
    PerfectForward(1.5, RunComp);
    PerfectForward(8, RunCode);
    PerfectForward(1.5, RunHome);

    return 0;
}
