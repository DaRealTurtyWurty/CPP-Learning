#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{
    std::string cardNumber;
    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    int sum = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    if (sum % 10 == 0)
    {
        std::cout << "The card number is valid.\n";
    }
    else
    {
        std::cout << "The card number is invalid.\n";
    }

    return 0;
}

int getDigit(const int number)
{
    return number % 10 + (number / 10) % 10;
}

int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.length() - 1; i >= 0; i -= 2)
    {
        int digit = cardNumber[i] - '0'; // Convert the character to an integer
        sum += digit;
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.length() - 2; i >= 0; i -= 2)
    {
        int digit = cardNumber[i] - '0'; // Convert the character to an integer
        sum += getDigit(digit * 2);
    }

    return sum;
}