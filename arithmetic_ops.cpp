#include <iostream>

int main()
{
    int students = 20;

    // students = students + 1;
    // students += 1;
    students++;

    // students = students - 1;
    // students -= 1;
    students--;

    // students = students * 2;
    students *= 2;

    // students = students / 2;
    students /= 2;

    int remainder = students % 3;

    std::cout << students;

    return 0;
}
