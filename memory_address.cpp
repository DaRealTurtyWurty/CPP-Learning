#include <iostream>

int main()
{
    std::string name = "Turty";
    int age = 19;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;
}
