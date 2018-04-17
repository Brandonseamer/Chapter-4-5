//Program: Dice Game
//Date: 4/16/18
//Author: Brandon Seamer

#include<iostream>
#include<random>
#include<string>
#include<ctime>
int dice;
int rollDice()
{

		
		srand(time(0));
		dice = rand() % 6 + 1;

	if (dice == 1)
	{
		std::cout << " ----- " << std::endl;
		std::cout << "|     |" << std::endl;
		std::cout << "|  .  |" << std::endl;
		std::cout << "|     |" << std::endl;
		std::cout << " ----- " << std::endl;
	}
	else if (dice == 2)
	{
		std::cout << " ----- " << std::endl;
		std::cout << "|  .  |" << std::endl;
		std::cout << "|     |" << std::endl;
		std::cout << "|  .  |" << std::endl;
		std::cout << " ----- " << std::endl;
	}
	else if (dice == 3)
	{
		std::cout << " ----- " << std::endl;
		std::cout << "|   . |" << std::endl;
		std::cout << "|  .  |" << std::endl;
		std::cout << "| .   |" << std::endl;
		std::cout << " ----- " << std::endl;
	}
	else if (dice == 4)
	{
		std::cout << " ----- " << std::endl;
		std::cout << "| . . |" << std::endl;
		std::cout << "|     |" << std::endl;
		std::cout << "| . . |" << std::endl;
		std::cout << " ----- " << std::endl;
	}
	else if (dice == 5)
	{
		std::cout << " ----- " << std::endl;
		std::cout << "| . . |" << std::endl;
		std::cout << "|  .  |" << std::endl;
		std::cout << "| . . |" << std::endl;
		std::cout << " ----- " << std::endl;
	}
	else if (dice == 6)
	{
		std::cout << " ----- " << std::endl;
		std::cout << "| . . |" << std::endl;
		std::cout << "| . . |" << std::endl;
		std::cout << "| . . |" << std::endl;
		std::cout << " ----- " << std::endl;
	}
	return 0;
}


int main()
{
	
	again:
	std::string tryAgain;
	int score;
	std::cout << "Welcome to my dice game! You will roll the dice 5x, try to receive your highest score!" << std::endl;
	std::cout << "You will roll 5 dice, your score is the sum of the dice." << std::endl;
	for (int n = 5; n > 0; n--)
	{
		
		
		rollDice();
		std::cout << "Roll again" << std::endl;
		system("pause");
		score = score + dice;
	}

	std::cout << "Your score is: " << score << ". " << std::endl;
	std::cout << "Would you like to try to score higher? 'Yes' or 'No'" << std::endl;
	std::cin >> tryAgain;
	if (tryAgain == "Yes" || tryAgain == "yes")
	{
		score = 0;
		goto again;
	}
	system("pause");
	return 0;
}