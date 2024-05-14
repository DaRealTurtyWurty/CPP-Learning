#include <iostream>

int main()
{
    std::string cars[] = {"Volvo", "BMW", "Ford", "Mazda"}; // std::string cars[4];
    std::cout << cars << "\n";

    std::cout << "The first car is " << cars[0] << "\n";

    cars[0] = "Tesla";

    std::cout << "The first car is now " << cars[0] << "\n";

    for (int i = 0; i < 4; i++)
    {
        std::cout << "Car " << i << " is " << cars[i] << "\n";
    }

    return 0;
}
