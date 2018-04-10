//Date 4/10/18
//Program: Guessing Game
//Author: Brandon Seamer

#include <iostream>
#include <random> /* srand, rand */
#include <time.h> /* time */
int main()
{
	//Declare Variables
	int numChoice;
	int secretNum;

	//Random Number Generator
	srand(time(NULL));
	/* generate number between 1 and 10: */
	secretNum = rand() % 100 + 1;
	do {


		//User Input
		std::cout << "Please pick a number between 1-100" << std::endl;
		std::cin >> numChoice;

		// Process
		if (numChoice == secretNum)
		{
			std::cout << "Congratulations you guess " << secretNum << " to be the correct number." << std::endl;
		}
		else
		{
			std::cout << "You chose poorly. Then number was not " << numChoice << ". " << std::endl;
		}
	} while (numChoice != secretNum);
	//Outputs
	system("pause");
	return 0;
}