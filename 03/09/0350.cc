#include <iostream>

using namespace std;

namespace Jim {
#if __cplusplus >= 201103L
    inline
#endif
    namespace cpp11 {
        struct Knife {
            Knife() {
                std::cout << "Knife in c++11" << std::endl;
            }
        };
    }

#if __cplusplus < 201103L
    inline
#endif
    namespace oldcpp {
        struct Knife {
            Knife() {
                std::cout << "Knife in old c++" << std::endl;
            }
        };
    }
}

using namespace Jim;

int main() {
    Knife a;
    cpp11::Knife b;
    oldcpp::Knife c;

    return 0;
}
