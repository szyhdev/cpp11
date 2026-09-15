#include <iostream>
#include <type_traits>

struct S1
{
    S1() = default;

    int data;
};

struct S2
{
    S2() {
    }

    int data;
};

struct S3
{
    S3() = default;
    S3(S3 const &) = default;

    int data;
};

struct S4
{
    S4(S4 const &) = default;

    int data;
};

struct S5
{
    S5(S5 const &s) {
        data = s.data;
    }

    int data;
};

struct Trivial1
{
};

struct Trivial2
{
public:
    int a;
private:
    int b;
};

struct Trivial3
{
    Trivial1 a;
    Trivial2 b;
};

struct Trivial4
{
    Trivial2 a[23];
};

struct Trivial5
{
    int x;
    static int y;
};

struct NonTrivial1
{
    NonTrivial1() : data(42) {
    }

    int data;
};

struct NonTrivial2
{
    NonTrivial2(NonTrivial2 const &) = default;

    int data;
};

struct NonTrivial3
{
    Trivial5 c;

    virtual void f() {
    };
};

int main()
{
    // trivial: rule 1
    std::cout << std::boolalpha;
    std::cout << std::is_trivial_v<S1> << ", " <<
            std::is_trivial_v<S2> << std::endl;
    std::cout << std::endl;

    // trivial: rule 2
    std::cout << std::is_trivial_v<S3> <<  ", " <<
            std::is_trivial_v<S4> <<  ", " <<
            std::is_trivially_copyable_v<S4> << ", " <<
            std::is_trivial_v<S5> << std::endl;
    std::cout << std::endl;

    // trivial: examples
    std::cout << std::is_trivial_v<Trivial1> << ", " <<
            std::is_trivial_v<Trivial2> << ", " <<
            std::is_trivial_v<Trivial3> << ", " <<
            std::is_trivial_v<Trivial4> << ", " <<
            std::is_trivial_v<Trivial5> << std::endl;

    std::cout << std::is_trivial_v<NonTrivial1> << ", " <<
            std::is_trivial_v<NonTrivial2> << ", " <<
            std::is_trivial_v<NonTrivial3> << std::endl;

    return 0;
}
