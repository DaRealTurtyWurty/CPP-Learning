#include <iostream>

int main()
{
    std::string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};

    for (std::string car : cars)
    {
        std::cout << car << "\n";
    }

    return 0;
}
