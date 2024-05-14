#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "What is your full name?: ";
    std::getline(std::cin >> std::ws, name);

    int age;
    std::cout << "How old are you, " << name << "?: ";
    std::cin >> age;

    std::cout << "Hello " << name << ", you are " << age << " years old!";

    return 0;
}
