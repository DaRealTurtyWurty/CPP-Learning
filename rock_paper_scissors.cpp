#include <iostream>
#include <string>

std::string getUserChoice()
{
    while (true)
    {
        std::cout << "Enter Rock, Paper, or Scissors: ";
        std::string choice;
        std::getline(std::cin, choice);

        if (choice != "Rock" && choice != "Paper" && choice != "Scissors")
        {
            std::cout << "Invalid choice, try again.\n";
            continue;
        }

        return choice;
    }
}

int main()
{
    std::cout << "Rock, Paper, or Scissors?\n";
    std::string userChoice = getUserChoice();

    std::cout << "You chose " << userChoice << ".\n";

    srand(time(NULL));
    int computerChoice = rand() % 3 + 1;

    std::string choices[3] = {"Rock", "Paper", "Scissors"};
    std::string computerChoiceStr = choices[computerChoice - 1];

    std::cout << "Computer chose " << computerChoiceStr << ".\n";

    if (userChoice == computerChoiceStr)
    {
        std::cout << "Tie!\n";
    }
    else if ((userChoice == "Rock" && computerChoiceStr == "Scissors") ||
             (userChoice == "Paper" && computerChoiceStr == "Rock") ||
             (userChoice == "Scissors" && computerChoiceStr == "Paper"))
    {
        std::cout << "You win!\n";
    }
    else
    {
        std::cout << "Computer wins!\n";
    }

    return 0;
}