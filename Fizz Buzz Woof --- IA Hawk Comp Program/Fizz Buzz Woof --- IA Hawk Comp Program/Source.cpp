//Program: Fizz Buzz Woof
//Date: 4/11/18
//Author: Brandon Seamer

#include <iostream>

int main()
{
	//Declare variables
	int userInput, displayNum = 1;

	//User Insert Input
	std::cout << "Type a number >>>" << std::endl;
	std::cin >> userInput;
	
	//Processes & Outputs
	do{
		if (displayNum % 3 == 0)
			std::cout << "Fizz";
		if (displayNum % 5 == 0)
			std::cout << "Buzz";
		if (displayNum % 7 == 0)
			std::cout << "Woof";
		if (displayNum % 3 != 0 && displayNum % 5 != 0 && displayNum % 7 != 0)
			std::cout << displayNum;
		std::cout << "\n";
		displayNum++;
	} while (displayNum < userInput || displayNum == userInput);


	//Program Conclusion
	system("pause");
	return 0;
}