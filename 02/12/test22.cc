#include "test.h"

extern template void func<int>(int);

void test22() {
    func(22);
}
