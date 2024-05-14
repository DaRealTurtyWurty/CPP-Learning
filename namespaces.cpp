#include <iostream>

namespace First
{
    int x = 1;
}

namespace Second
{
    int x = 2;
}

int main()
{
    // using namespace First;
    // using std::cout
    // using std::string

    int x = 0;

    std::cout << x << std::endl;
    std::cout << First::x << std::endl;
    std::cout << Second::x;

    return 0;
}