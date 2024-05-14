#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "What is your name?: ";
    std::getline(std::cin, name);

    if (name.length() > 12)
        std::cout << "Your name is long!\n";
    else if (name.length() < 6)
        std::cout << "Your name is short!\n";
    else
        std::cout << "Your name is just right!\n";

    if (name.empty())
        std::cout << "You didn't enter a name!\n";
    else
        std::cout << "Hello, " << name << "!\n";

    // name.clear();

    name.append(" the Great");
    std::cout << "Hello, " << name << "!\n";

    std::cout << "Your name is " << name.length() << " characters long!\n";

    std::cout << "Your name starts with the letter " << name.front() << "!\n";
    std::cout << "Your name ends with the letter " << name.back() << "!\n";

    name.insert(0, "Mr. ");
    std::cout << "Hello, " << name << "!\n";

    return 0;
}
