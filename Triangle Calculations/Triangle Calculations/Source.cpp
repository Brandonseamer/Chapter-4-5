//Program: Triangle Calculations
//Date: 4/11/2018
//Author: Brandon Seamer

#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
double area, perimeter;
double parameter = 3;
double userSide1, userSide2, userSide3;
std::string userQuit;
int equilateral(double side)
{
	
	parameter = std::sqrt(parameter);
	double height = (parameter / 2) * side;
	area = parameter / 4;
	area = area *side*side;
	perimeter = side + side + side;
	std::cout << "Your area is: " << area << ". Your perimeter is: " << perimeter << ". " << std::endl;

	return 0;
}

int isosceles(double base, double height)
{
	double actualHeight;
	parameter = (height*height) - ((base*base) / 4);
	actualHeight = sqrt(parameter);
	area = base*actualHeight/2;
	perimeter = base+height+height;
	std::cout <<"Your height is: " << actualHeight <<". Your area is: " << area << ". Your perimeter is: " << perimeter << ". " << std::endl;

	return 0;
}

int rightTriangle(double base, double height, double hypotenuse)
{
	if (base == 0)
	{
		//a^2 * b^2 = c^2
		// b = sqrt (C^2/a^2)
		base = sqrt((hypotenuse*hypotenuse) - (height*height));
		area = base*height / 2;
		perimeter = base + height + hypotenuse;
		std::cout << "Your base is: " << base << ". Your area is: " << area << ". Your perimeter is: " << perimeter << ". " << std::endl;
	}
	if (height == 0)
	{
		//a^2 * b^2 = c^2
		// b = sqrt (C^2/a^2)
		height = sqrt((hypotenuse*hypotenuse) - (base*base));
		area = base*height / 2;
		perimeter = base + height + hypotenuse;
		std::cout << "Your height is " << height << ". Your area is: " << area << ". Your perimeter is: " << perimeter << ". " << std::endl;
	}

	if (hypotenuse == 0)
	{
		hypotenuse = sqrt(base*base+height*height);
		area = base*height / 2;
		perimeter = base + height + hypotenuse;
		std::cout <<"Your hypotenuse is " << hypotenuse << ". Your area is: " << area << ". Your perimeter is: " << perimeter << ". " << std::endl;
	}
	return 0;
}

int main()
{
	//Declare Variables
	std::string triangleType;
	std::string triangleSideInput;
	int restart;
	//Processes
	do{
		triangleType = "Test";
		std::cout << "What is the type of your triangle? \n Type exactly as follows: \n 'Equilateral' \n 'Isosceles' \n or \n 'Right'" << std::endl;
	restart:
		std::cin >> triangleType;
		if (triangleType == "Right")
		{
			std::cout << "Do you know the base, height, or hypotenuse? Type as 'base' 'height' or 'hypotenuse'." << std::endl;
			do
			{
				std::cin >> triangleSideInput;

				if (triangleSideInput == "base")
				{
					std::cout << "What is the base?" << std::endl;
					std::cin >> userSide1;
				}
				else if (triangleSideInput == "height")
				{
					std::cout << "What is the height?" << std::endl;
					std::cin >> userSide2;
				}

				else if (triangleSideInput == "hypotenuse")
				{
					std::cout << "What is the hypotenuse?" << std::endl;
					std::cin >> userSide3;
				}
				if (restart != 1)
				std::cout << "What is your other side? 'base' height' or 'hypotenuse'." << std::endl;
				restart++;
			} while (restart != 2);
			rightTriangle(userSide1, userSide2, userSide3);
		}
		else if (triangleType == "Isosceles")
		{
			std::cout << "What is the base length?" << std::endl;
			std::cin >> userSide1;
			std::cout << "What is the side lengths?" << std::endl;
			std::cin >> userSide2;
			isosceles(userSide1, userSide2);
		}
		else if (triangleType == "Equilateral")
		{
			std::cout << "What is the side length?" << std::endl;
			std::cin >> userSide1;
			equilateral(userSide1);
		}
		else{
			goto restart;
		}
		std::cout << "Would you like to solve another triangle? If no, type 'STOP'." << std::endl;
		std::cin >> userQuit;
		
	} while (userQuit != "STOP");
	system("pause");
	return 0;
}