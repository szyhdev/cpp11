#include <boost/core/ignore_unused.hpp>

using namespace boost;

int main() {
    const int x = 1024;
    ignore_unused(x);
    const int y = 10;

    // char a = x;  // Compile warning
    // char *b = new char(1024);  // Compile warning

    // char c = { x };  // Compile error
    char d = { y };
    ignore_unused(d);

    // unsigned char e { -1 };  // Compile error

    float f { 7 };
    ignore_unused(f);

    // int g { 2.0f };  // Compile error
    // float *h = new float { 1e48 };  // Compile error
    float i = 1.2l;
    ignore_unused(i);

    return 0;
}
