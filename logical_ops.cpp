#include <iostream>

int main()
{
    int temp;
    bool isGood = false;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30)
    {
        std::cout << "It's good!\n";
        isGood = true;
    }
    else if (temp > 30)
    {
        std::cout << "It's hot!\n";
    }
    else if (temp < 0 || temp > 100)
        std::cout << "It's not good!\n";
    else
        std::cout << "It's cold!\n";

    if (!isGood)
        std::cout << "It's not good!\n";
    else
        std::cout << "It's good!\n";

    return 0;
}
