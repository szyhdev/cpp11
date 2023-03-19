#include <iostream>
#include "utils.h"

#if __cplusplus < 201103L
#error "should use C++11 implementation"
#endif

int main() {
    std::cout << "Invoke Add() from .cc: 5 + 10 = " << Add(5, 10) << std::endl;

    return 0;
}
