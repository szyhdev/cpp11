#include <iostream>
#include <type_traits>

union U1
{
};

union U2
{
    U2() {
    }
};

enum E
{
};

typedef double *DA;
typedef void (*PF)(int, double);

int main()
{
    // POD: user-defined types
    std::cout << std::boolalpha;
    std::cout << std::is_pod_v<U1> << ", " <<
            std::is_pod_v<U2> << ", " <<
            std::is_pod_v<E> << ", " <<
            std::is_pod_v<DA> << ", " <<
            std::is_pod_v<PF> << std::endl;

    // POD: scalar types and array
    std::cout << std::is_pod_v<int> << ", " <<
            std::is_pod_v<double []> << std::endl;

    return 0;
}
