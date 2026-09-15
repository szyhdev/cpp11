#include <iostream>
#include <type_traits>

struct SLayout1
{
};

struct SLayout2
{
private:
    int x;
    int y;
};

struct SLayout3 : SLayout1
{
    int x;
    int y;

    void f() {
    };
};

struct SLayout4 : SLayout1
{
    int x;
    SLayout1 y;
};

struct SLayout5 : SLayout1, SLayout2
{
};

struct SLayout6
{
    static int y;
};

struct SLayout7 : SLayout6
{
    int x;
};

struct NonSLayout1 : SLayout1
{
    SLayout1 x;
    int i;
};

struct NonSLayout2 : SLayout2
{
    int z;
};

struct NonSLayout3 : NonSLayout2
{
};

struct NonSLayout4
{
public:
    int x;
private:
    int y;
};

int main()
{
    // standard_layout: examples
    std::cout << std::boolalpha;
    std::cout << std::is_standard_layout_v<SLayout1> << ", " <<
            std::is_standard_layout_v<SLayout2> << ", " <<
            std::is_standard_layout_v<SLayout3> << ", " <<
            std::is_standard_layout_v<SLayout4> << ", " <<
            std::is_standard_layout_v<SLayout5> << ", " <<
            std::is_standard_layout_v<SLayout6> << ", " <<
            std::is_standard_layout_v<SLayout7> << std::endl;

    std::cout << std::is_standard_layout_v<NonSLayout1> << ", " <<
            std::is_standard_layout_v<NonSLayout2> << ", " <<
            std::is_standard_layout_v<NonSLayout3> << ", " <<
            std::is_standard_layout_v<NonSLayout4> << std::endl;

    return 0;
}
