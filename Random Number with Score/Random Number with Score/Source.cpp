//Author Brandon Seamer
//4/10/18
//Program: Random Number Hot + Cold Game

#include <iostream>
#include <random>
#include <time.h>

int main()
{
	int numChoice;
	int secretNum;
	int score;
	srand(time(NULL));
	secretNum = rand() % 100 + 1;

	do {
		std::cout << "Please pick a number between 1-100" << std::endl;
		std::cout << "You have guessed wrong " << score << " times so far. \n" << std::endl;
		std::cin >> numChoice;

		if (numChoice > secretNum)
		{
			std::cout << "The number you have chosen is higher than the secret number. Guess again idiot. \n" << std::endl;
		}
		else if (numChoice < secretNum)
		{
			std::cout << "The number you have chosen is lower than the secret number. Guess again idiot. \n" << std::endl;
		}
		else
		{
			std::cout << "Oh you actually got it \n" << std::endl;
		}
		score++;
	} while (numChoice != secretNum);
		std::cout << "Congratulations, you're not a moron." << std::endl;
		std::cout << "It only took you " << score << " attempts." << std::endl;
		system("pause");
		return 0;
}