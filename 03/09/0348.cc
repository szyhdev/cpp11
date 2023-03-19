#include <iostream>

using namespace std;

namespace Jim {
    namespace Basic {
        struct Knife {
            Knife() {
                cout << "Knife in Basic" << endl;
            }
        };
        class CorkScrew {
        };
    }
    namespace Toolkit {
        template <typename T>
        class SwissArmyKnife {
        public:
            void func() {
                cout << "SwissArmyKnife<typename T>::func(): " << typeid(T).name() << endl;
            }
        };
    }
    namespace Other {
        struct Knife {
            Knife() {
                cout << "Knife in Other" << endl;
            }
        };
        Knife c;
        Basic::Knife k;
    }
    using namespace Basic;
    using namespace Toolkit;
}

namespace Jim {
namespace Toolkit {  // Compiler error without this line
    template <>
    class SwissArmyKnife<Knife> {
    public:
        void func() {
            cout << "SwissArmyKnife<Knife>::func(): " << typeid(Knife).name() << endl;
        }
    };
}
}

using namespace Jim;

int main() {
    SwissArmyKnife<Basic::Knife> sknife_basic;
    sknife_basic.func();
    SwissArmyKnife<Knife> sknife_specialized;
    sknife_specialized.func();
    Toolkit::SwissArmyKnife<Other::Knife> sknife_other;
    sknife_other.func();

    return 0;
}
