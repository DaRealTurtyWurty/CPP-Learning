#include <iostream>

double square(double length);
double cube(double length);

int main()
{
    double length;
    std::cout << "Enter the length of the square room: ";
    std::cin >> length;

    double area = square(length);
    std::cout << "The area of the room is " << area << ".\n";

    double volume = cube(length);
    std::cout << "The volume of the room is " << volume << ".\n";

    return 0;
}

double square(double length)
{
    return length * length;
}

double cube(double length)
{
    return length * length * length;
}