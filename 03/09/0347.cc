#include <iostream>

using namespace std;

namespace Jim {
    namespace Basic {
        struct Knife {
            Knife() {
                cout << "Knife in Basic" << endl;
            }
        };
    }
    namespace Toolkit {
        template <typename T>
        class SwissArmyKnife {
        public:
            void func() {
                cout << "SwissArmyKnife::func()" << endl;
            }
        };
    }
    namespace Other {
        // Knife b;  // Compile error
        struct Knife {
            Knife() {
                cout << "Knife in Other" << endl;
            }
        };
        Knife c;
        Basic::Knife k;
    }
}

using namespace Jim;

int main() {
    // Jim::Toolkit::SwissArmyKnife<Jim::Basic::Knife> sknife;
    Toolkit::SwissArmyKnife<Basic::Knife> sknife;
    sknife.func();

    return 0;
}
