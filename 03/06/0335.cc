#include <iostream>

#pragma pack(1)

struct S1
{
public:
    int a;
    int b;
};

struct S2
{
public:
    int a;
private:
    int b;
};

struct B1
{
    static int a;
};

struct B2
{
    int a;
};

struct D1 : B1
{
    int d;
};

struct D2 : B2
{
    static int d;
};

struct D3 : B1, B2
{
    static int d;
};

struct D4 : B2
{
    int d;
};

struct D5 : B2, D1
{
};

struct Base1
{
};

struct Base2
{
};

struct Derived1 : Base1
{
    Base2 b;
    int i;
};

struct Derived2 : Base1
{
    Base1 b;
    int i;
};

#pragma pack()

int main()
{
    // standard_layout: rule 1
    std::cout << std::boolalpha;
    std::cout << std::is_standard_layout_v<S1> << ", " <<
            std::is_standard_layout_v<S2> << std::endl;

    // standard_layout: rule 2
    std::cout << std::is_standard_layout_v<D1> << ", " <<
            std::is_standard_layout_v<D2> << ", " <<
            std::is_standard_layout_v<D3> << ", " <<
            std::is_standard_layout_v<D4> << ", " <<
            std::is_standard_layout_v<D5> << std::endl;

    // standard_layout: rule 3
    std::cout << std::is_standard_layout_v<Derived1> << ", " <<
            std::is_standard_layout_v<Derived2> << std::endl;
    std::cout << std::endl;

    Derived1 d1;
    Derived2 d2;
    std::cout << std::hex;
    std::cout << "sizeof(Derived1) = " << sizeof(d1) << std::endl;
    std::cout << "&d1 = " << reinterpret_cast<long long>(&d1) << std::endl;
    std::cout << "&(d1.b) = " << reinterpret_cast<long long>(&(d1.b)) << std::endl;
    std::cout << "&(d1.i) = " << reinterpret_cast<long long>(&(d1.i)) << std::endl;
    std::cout << std::endl;
    std::cout << "sizeof(Derived2) = " << sizeof(d2) << std::endl;
    std::cout << "&d2 = " << reinterpret_cast<long long>(&d2) << std::endl;
    std::cout << "&(d2.b) = " << reinterpret_cast<long long>(&(d2.b)) << std::endl;
    std::cout << "&(d2.i) = " << reinterpret_cast<long long>(&(d2.i)) << std::endl;

    return 0;
}
