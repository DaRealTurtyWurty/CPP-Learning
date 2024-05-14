#include <iostream>

struct Rectangle
{
    int length = 5;
    int width = 5;
};

void printRectangle(Rectangle rect);
void squareRectangle(Rectangle &rect);

int main()
{
    Rectangle rect;
    rect.length = 10;

    std::cout << "Rectangle 1 Area: " << rect.length * rect.width << '\n';

    Rectangle rect2 = {7, 7};
    std::cout << "Rectangle 2 Area: " << rect2.length * rect2.width << '\n';

    printRectangle(rect);
    std::cout << '\n';

    squareRectangle(rect);
    printRectangle(rect);

    return 0;
}

void printRectangle(Rectangle rect) // Pass by value
{
    std::cout << "Length: " << rect.length << '\n';
    std::cout << "Width: " << rect.width << '\n';
    std::cout << "Area: " << rect.length * rect.width << '\n';
}

void squareRectangle(Rectangle &rect) // Pass by reference
{
    rect.length *= rect.length;
    rect.width *= rect.width;
}