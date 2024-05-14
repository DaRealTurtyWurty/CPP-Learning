#include <iostream>
#include <cmath>

int main()
{
    double sideA, sideB, hypotenuse;

    std::cout << "Enter side A: ";
    std::cin >> sideA;

    std::cout << "Enter side B: ";
    std::cin >> sideB;

    hypotenuse = sqrt(pow(sideA, 2) + pow(sideB, 2));

    std::cout << "The hypotenuse is: " << hypotenuse << "\n";

    return 0;
}
