#include <iostream>
#include <string>

int main()
{
    std::string name;
    while (name.empty())
    {
        std::cout << "What is your name?: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello, " << name << "!\n";

    return 0;
}
