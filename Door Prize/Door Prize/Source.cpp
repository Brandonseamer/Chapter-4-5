//Date 4/10/18
//Program: Door Prize
//Author: Brandon Seamer

#include <iostream>

int main()
{
	//Declare Variables
	int doorChoice;
	
	//User Input
	std::cout << "Please pick a door: 1, 2, or 3" << std::endl;
	std::cin >> doorChoice;
	//Outputs
	if (doorChoice == 1)
	{
		std::cout << "The prize behind door " << doorChoice << " is Kane. Hide." << std::endl;
	}
	else if (doorChoice == 2)
	{
		std::cout << "The prize behind door " << doorChoice << " is Zach. Hide." << std::endl;
	}

	else if (doorChoice == 3)
	{
		std::cout << "The prize behind door " << doorChoice << " is Doyle. Hide." << std::endl;
	}
	else
	{
		std::cout << "Why would you type " << doorChoice << "? That is not even an option, idiot." << std::endl;
	}

	system("pause");
	return 0;
}