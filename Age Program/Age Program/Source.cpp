//Program: Age Program
//Date: 4/10/18
//Author: Brandon Seamer
#include <iostream>

int main()
{
	//declare variables
	int ageInput;

	//User Input
	std::cout << "What is your age?" << std::endl;
	std::cin >> ageInput;
	//Processes
	if (ageInput > 0 && ageInput < 6)
	{
		std::cout << "Change your diapers, the computer smells now." << std::endl;
	}
	else if (ageInput > 5 && ageInput < 13)
	{
		std::cout << "What, are you in learn-to-type_101 or something? Your keystrokes are trash." << std::endl;
	}
	else if (ageInput > 12 && ageInput < 20)
	{
		std::cout << "I dont even want to know what you are looking up right now." << std::endl;
	}
	else if (ageInput > 19 && ageInput < 27)
	{
		std::cout << "Ahh, getting old and into college, just remember, life only gets worse from here." << std::endl;
	}
	else if (ageInput > 26 && ageInput < 36)
	{
		std::cout << "Oh great, you're going to use this computer for work again, because you cant get a well paying job and retire already." << std::endl;
	}
	else
	{
		std::cout << "Can you even read this anymore? Your eyes still work? Wow." << std::endl;
	}
	system("pause");
	return 0;
}
