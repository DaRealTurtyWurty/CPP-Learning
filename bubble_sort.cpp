#include <iostream>

void bubbleSort(int array[], int size);

int main()
{
    int numbers[] = {7, 3, 5, 1, 9, 8, 4, 6, 2};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int number : numbers)
    {
        std::cout << number << "\n";
    }

    std::cout << "\n";

    bubbleSort(numbers, length);

    for (int number : numbers)
    {
        std::cout << number << "\n";
    }

    return 0;
}

void bubbleSort(int array[], int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
