#include <iostream>

int main()
{
    int *ptr = nullptr;
    int x = 123;

    ptr = &x;

    if (ptr == nullptr)
    {
        std::cout << "ptr is not assigned\n";
    }
    else
    {
        std::cout << "ptr is assigned\n";
        std::cout << "The value of ptr is " << *ptr << '\n';
    }

    ptr = nullptr;
    std::cout << "The value of ptr is " << *ptr << '\n'; // This will cause a segmentation fault

    return 0;
}
