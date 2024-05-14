#include <iostream>

int main()
{
    std::string name = "Turty";
    std::string *pname = &name;

    std::cout << "The pointer is " << pname << '\n';
    std::cout << "The value of the pointer is " << *pname << '\n';
    return 0;
}
