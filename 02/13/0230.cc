#include <boost/core/ignore_unused.hpp>

using namespace boost;

template <typename T>
class X {
};

template <typename T>
void TempFunc(T t) {
};

struct A {
} a;

#if __cplusplus >= 201103L
struct {
    int i;
} b;
#endif

typedef struct {
    int i;
} B;

void Func() {
#if __cplusplus >= 201103L
    struct C {
    } c;
#endif
    X<A> x1;
    X<B> x2;
#if __cplusplus >= 201103L
    X<C> x3;
#endif
    TempFunc(a);
#if __cplusplus >= 201103L
    TempFunc(b);
    TempFunc(c);
#endif

    ignore_unused(x1);
    ignore_unused(x2);
#if __cplusplus >= 201103L
    ignore_unused(x3);
#endif
}

int main() {
    Func();

    return 0;
}
