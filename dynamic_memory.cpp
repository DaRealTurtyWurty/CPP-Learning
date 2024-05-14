#include <iostream>

int main()
{
    int *pNum = NULL;

    pNum = new int;

    *pNum = 42;

    std::cout << "pNum points to: " << *pNum << '\n';

    delete pNum; // free up the memory pointed to by pNum if it's not needed anymore

    char *pGrades = NULL;

    int numGrades;
    std::cout << "How many grades do you want to enter: ";
    std::cin >> numGrades;

    pGrades = new char[numGrades];

    for (int i = 0; i < numGrades; i++)
    {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    std::cout << "\n\n";

    for (int i = 0; i < numGrades; i++)
    {
        std::cout << "Grade #" << i + 1 << ": " << pGrades[i] << '\n';
    }

    delete[] pGrades;

    return 0;
}
