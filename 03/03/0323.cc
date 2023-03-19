#include <iostream>
#include <boost/core/ignore_unused.hpp>

using namespace std;
using namespace boost;

struct MayThrow {
    MayThrow() {
        cout << "MayThrow constructor" << endl;
    }
    MayThrow(const MayThrow &mt) {
        cout << "MayThrow copy constructor" << endl;
    }
    MayThrow(MayThrow &&mt) {
        cout << "MayThrow move constructor" << endl;
    }
};

struct NoThrow {
    NoThrow() {
        cout << "NoThrow constructor" << endl;
    }
    NoThrow(const NoThrow &mt) {
        cout << "NoThrow copy constructor" << endl;
    }
    NoThrow(NoThrow &&mt) noexcept {
        cout << "NoThrow move constructor" << endl;
    }
};

int main() {
    MayThrow mt1;
    MayThrow mt2 = move_if_noexcept(mt1);
    ignore_unused(mt2);

    NoThrow nt1;
    NoThrow nt2 = move_if_noexcept(nt1);
    ignore_unused(nt2);
    cout << endl;

    cout << is_move_constructible<MayThrow>::value << ", " <<
            is_trivially_move_constructible<MayThrow>::value << ", " <<
            is_nothrow_move_constructible<MayThrow>::value << endl;
    cout << is_move_constructible<NoThrow>::value << ", " <<
            is_trivially_move_constructible<NoThrow>::value << ", " <<
            is_nothrow_move_constructible<NoThrow>::value << endl;

    return 0;
}
