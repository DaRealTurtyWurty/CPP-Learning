#include <iostream>
#include <string>

void happyBirthday(std::string name, int age);

int main()
{
    std::string name;
    std::cout << "What is your name?: ";
    std::getline(std::cin, name);

    int age;
    std::cout << "How old are you?: ";
    std::cin >> age;

    std::cout << "Hello, " << name << "!\n";
    happyBirthday(name, age);
    happyBirthday(name, age);
    happyBirthday(name, age);
    return 0;
}

void happyBirthday(std::string name, int age)
{
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear " << name << "!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "You are " << age << " years old!\n\n";
}