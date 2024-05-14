#include <iostream>

void printInfo(const std::string name, const int age);

int main()
{
    std::string name = "Turty";
    int age = 19;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age)
{
    // By making it a const, we can't change the value of the variable
    // name = "Ryan"; // This will cause an error
    // age = 20; // This will cause an error
    std::cout << "Name: " << name << '\n';
    std::cout << "Age: " << age << '\n';
}
