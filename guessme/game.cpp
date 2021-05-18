#include <iostream>
#include <cstdlib>
#include <ctime>

void guess_list(int list[], int size)
{
    std::cout << "Your guesses: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << list[i] << "\t";
    }
}
void play_game()
{
    int list[250];
    int size = 0;
    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Yo!!, game started! \n";
    std::cout << "Now guess a number \n";

    int guess;
    while (true)
    {

        std::cin >> guess;

        list[size++] = guess;
        if (guess == random)
        {
            std::cout << "You win\n";
            break;
        }
        else if (guess < random)
        {
            std::cout << "Too low\n";
        }
        else
        {
            std::cout << "Too high\n";
        }
    }
    // std::cout << std::endl;
    guess_list(list, size);
    std::cout << std::endl;
}
int main()
{
    int choice;

    do
    {
        srand(time(NULL));
        std::cout
            << "0. Quit \n"
            << "1. Play Now \n";
        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "You just quit the game! \n";
            return 0;
        case 1:
            play_game();
            break;
        }

    } while (choice != 0);

    return 0;
}