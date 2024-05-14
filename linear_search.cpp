#include <iostream>

int linearSearch(int array[], int size, int searchKey);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    int index;
    std::cout << "Enter an index: ";
    std::cin >> index;

    if (index >= length || index < 0)
    {
        std::cout << "Out of bounds!\n";
        return 1;
    }

    int location = linearSearch(numbers, length, index);
    if (location == -1)
    {
        std::cout << "The element at index " << index << " was not found.\n";
        return 1;
    }

    std::cout << "The element at index " << index << " is " << numbers[location] << ".\n";
    return 0;
}

int linearSearch(int array[], int size, int searchKey)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == searchKey)
        {
            return i;
        }
    }

    return -1;
}
