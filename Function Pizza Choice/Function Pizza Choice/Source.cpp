//Author: Brandon Seamer
//Date: 4/13/2018
//Program: Pizza Choice w/ Functions (Because it's messy without them)
#include<iostream>
#include<string>
#include<math.h>
#include<random>
//Declare Global Variables
double sum = 0;
std::string pizzaMore;
std::string pizzaTopping;
int pizzas;
std::string pizzaSize;
std::string pizzaWantExtraTopping;
std::string pizzaExtraTopping;
int pizzaToppingMath()
{
	if (pizzaTopping == "pepperoni")
		sum = sum + 1.39;
	else if (pizzaTopping == "cheese")
		sum = sum + .99;
	else if (pizzaTopping == "sausage")
		sum = sum + .49;
	return 0;
}

int pizzaSizeMath()
{
	if (pizzaSize == "large")
		sum = sum + 13.99;
	else if (pizzaSize == "medium")
		sum = sum + 12.99;
	else if (pizzaSize == "small")
	sum = sum + 9.99;
	return 0;
}
int total()
{
	double taxedSum;
	taxedSum = sum + sum*.07;
	std::cout << "You ordered a " << pizzaSize << " " << pizzaTopping << " pizza and " << pizzas <<" others." << std::endl;
	std::cout << "Your total with taxes is: " << taxedSum << ". Your total without taxes is: " << sum << ". " << std::endl;
	return 0;
}
int main()
{
	do
	{
		std::cout << "What size pizza would you like? 'small', 'medium', or 'large'" << std::endl;
		std::cin >> pizzaSize;
		std::cout << "What topping would you like? 'pepperoni, 'cheese' or 'sausage'" << std::endl;
		std::cin >> pizzaTopping;
		pizzaSizeMath();
		pizzaToppingMath();
		std::cout << "Would you like an extra topping? 'Yes' or 'No'" << std::endl;
		std::cin >> pizzaWantExtraTopping;
		if (pizzaWantExtraTopping == "Yes")
		{
			std::cout << "What topping would you like? 'pepperoni, 'cheese' or 'sausage'" << std::endl;
			std::cin >> pizzaTopping;
			pizzaToppingMath();
		}

		total();
		pizzas = pizzas + 1;
		std::cout << "Would you like to purchase another pizza? If not, type 'STOP'" << std::endl;
		std::cin >> pizzaMore;
	} while (pizzaMore != "STOP");
	system("pause");
	return 0;
}
