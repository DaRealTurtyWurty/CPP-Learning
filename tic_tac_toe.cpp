#include <iostream>
#include <string>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWin(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{
    char spaces[9];
    for (int i = 0; i < 9; i++)
    {
        spaces[i] = ' ';
    }

    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running)
    {
        playerMove(spaces, player);
        if (checkWin(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        if (checkWin(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }
    }

    std::cout << "Game over! Thanks for playing!\n";

    return 0;
}

void drawBoard(char *spaces)
{
    std::cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << '\n';
    std::cout << "-----------\n";
    std::cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << '\n';
    std::cout << "-----------\n";
    std::cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << '\n';
}

void playerMove(char *spaces, char player)
{
    int move;
    do
    {
        std::cout << "Enter a move (1-9): ";
        std::cin >> move;
        move--;
        if (spaces[move] == ' ')
        {
            spaces[move] = player;
            break;
        }
        else
        {
            std::cout << "That space is already taken!\n";
            move = 0;
            continue;
        }
    } while (!move > 0 && !move < 8);

    drawBoard(spaces);
}

void computerMove(char *spaces, char computer)
{
    int move;
    srand(time(0));

    while (true)
    {
        move = rand() % 9;
        if (spaces[move] == ' ')
        {
            spaces[move] = computer;
            break;
        }
        else
        {
            continue;
        }
    }

    drawBoard(spaces);
}

bool checkWin(char *spaces, char player, char computer)
{
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
    {
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
    {
        spaces[3] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        spaces[6] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
    {
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
    {
        spaces[1] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
    {
        spaces[2] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
    {
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
    {
        spaces[2] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else
    {
        return false;
    }

    return true;
}

bool checkTie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }

    std::cout << "It's a tie!\n";
    return true;
}
