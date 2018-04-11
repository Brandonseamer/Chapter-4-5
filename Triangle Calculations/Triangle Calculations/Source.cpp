//Program: Triangle Calculations
//Date: 4/11/2018
//Author: Brandon Seamer

#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
double area, perimeter;
double parameter = 3;
double base, height, hypotenuse;
int equilateral(double side)
{
	parameter = std::sqrt(parameter);
	area = parameter / 4;
	area = area *side*side;
	perimeter = side + side + side;
	std::cout << "Your area is: " << area << ". Your perimeter is: " << perimeter << ". " << std::endl;
}

int isosceles(double base, double height)
{
	double actualHeight;
	parameter = (height*height) - ((base*base) / 4);
	actualHeight = sqrt(parameter);
	area = base*actualHeight/2;
	perimeter = base+height+height;
	std::cout << "Your area is: " << area << ". Your perimeter is: " << perimeter << ". " << std::endl;
}

int rightTriangle()
{
	if (base == 0)
	{
		//a^2 * b^2 = c^2
		// b = sqrt (C^2/a^2)
		base = sqrt((hypotenuse*hypotenuse) / (height*height));
		area = base*height / 2;
		perimeter = base + height + hypotenuse;
		std::cout << "Your area is: " << area << ". Your perimeter is: " << perimeter << ". " << std::endl;
	}
	if (height == 0)
	{
		//a^2 * b^2 = c^2
		// b = sqrt (C^2/a^2)
		height = sqrt((hypotenuse*hypotenuse) / (base*base));
		area = base*height / 2;
		perimeter = base + height + hypotenuse;
		std::cout << "Your area is: " << area << ". Your perimeter is: " << perimeter << ". " << std::endl;
	}

	if (hypotenuse == 0)
	{
		hypotenuse = sqrt(base*base*height*height);
		area = base*height / 2;
		perimeter = base + height + hypotenuse;
		std::cout << "Your area is: " << area << ". Your perimeter is: " << perimeter << ". " << std::endl;
	}

}

int main()
{
	//Declare Variables
	std::string userInput1, userInput2;
	//Processes
	std::string triangleType;
	std::cout << "What is the type of your triangle?" << std::endl;
	std::cin >> triangleType;
	if (triangleType == "Right Triangle")
	{
		std::cout << "What sides are you given?" << std::endl;
	}
	if (triangleType == "Isosceles Triangle")
	{
		std::cout << "What sides are you given?" << std::endl;
	}
	if (triangleType == "Equilateral Triangle")
	{
		std::cout << "What 2 sides are you given?" << std::endl;
		std::cin >> userInput1, userInput2;
	}
	//Processes

}