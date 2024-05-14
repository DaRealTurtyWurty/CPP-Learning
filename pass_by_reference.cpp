#include <iostream>

// void swap(std::string x, std::string y);
void swap(std::string &x, std::string &y);

int main()
{
    std::string x = "Turty";
    std::string y = "Wurty";
    std::string temp;

    swap(x, y);

    std::cout << "x is " << x << '\n';
    std::cout << "y is " << y << '\n';

    return 0;
}

// void swap(std::string x, std::string y) // Doesn't work because x and y are copies of the original variables
// {
//     std::string temp;

//     temp = x;
//     x = y;
//     y = temp;
// }

void swap(std::string &x, std::string &y) // Works because x and y are references to the original variables
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}