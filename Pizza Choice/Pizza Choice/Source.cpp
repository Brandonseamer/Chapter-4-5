//Date 4/12/2018
//Author Brandon Seamer
//Program Pizza Choice

#include <iostream>
#include <string>


int main()
{
	int userToppings, anotherTopping; // user choosing type of pizza
	double pizzaSmall = 7.99;// price of pizza
	double pizzaMedium = 8.99;// price of pizza
	double pizzaLarge = 10.99; // price of pizza
	int pizzaSize; // Size of the pizza
	std::string pizzaString;
	double total; // Total cost
	std::cout << "Welcome to Luigi's stereotypical pizza joint!" << std::endl;
	std::cout << "We serve 3 menu options. 1 is a small pizza, 2 is a medium pizza, 3 is a large pizza." << std::endl;
	pick1:
	std::cout << "What size of pizza do you want? >>>" << std::endl;
	std::cin >> pizzaSize;
	if (pizzaSize == 1)
	{
		std::cout << "You chose a small pizza, the price is " << pizzaSmall << ". What toppings would you like?" << std::endl;
		std::cout << "We serve 3 menu options. 1 is pepperoni, 2 is canadian bacon, 3 is cheese." << std::endl;
		std::cin >> userToppings;
		if (userToppings == 1)
		{
			std::cout << "You chose pepperoni pizza." << std::endl;
			std::cout << "Would you like to purchase another topping for $0.99? >>>" << std::endl;
			std::cout << "We serve two menu options, option 1 is Canadian Bacon, option 2 is cheese." << std::endl;
			total = pizzaSmall;
			std::cin >> anotherTopping;
			pizzaString = "small";
			if (anotherTopping == 1)
			{
				std::cout << "You have selected a " << pizzaString << " pepperoni and canadian bacon pizza." << std::endl;
				total = pizzaSmall + .99;
			}
			if (anotherTopping == 2)
			{
				std::cout << "You have selected a pepperoni and cheese pizza." << std::endl;
				total = pizzaSmall + .99;
			}
		}
		if (userToppings == 2)
		{
			std::cout << "You chose canadian bacon pizza." << std::endl;
			std::cout << "Would you like to purchase another topping for $0.99? >>>" << std::endl;
			std::cout << "We serve two menu options, option 1 is pepperoni, option 2 is cheese." << std::endl;
			std::cin >> anotherTopping;
			pizzaString = "small";
			total = pizzaSmall;
			if (anotherTopping == 1)
			{
				std::cout << "You have selected a " << pizzaString << " pepperoni and canadian bacon pizza." << std::endl;
				total = pizzaSmall + .99;
			}
			if (anotherTopping == 2)
			{
				std::cout << "You have selected a canadian bacon and cheese pizza." << std::endl;
				total = pizzaSmall + .99;
			}
		}
		if (userToppings == 3)
		{
			std::cout << "You chose cheese pizza." << std::endl;
			std::cout << "Would you like to purchase another topping for $0.99? >>>" << std::endl;
			std::cout << "We serve two menu options, option 1 is pepperoni, option 2 is canadian bacon. (Type only the option number. (Ex: '1'))" << std::endl;
			std::cin >> anotherTopping;
			pizzaString = "small";
			total = pizzaSmall;
			if (anotherTopping == 1)
			{
				std::cout << "You have selected a " << pizzaString << " pepperoni and cheese pizza." << std::endl;
				total = pizzaSmall + .99;
			}
			if (anotherTopping == 2)
			{
				std::cout << "You have selected a canadian bacon and cheese pizza." << std::endl;
				total = pizzaSmall + .99;
			}
		}
	}
	if (pizzaSize == 2)
	{
		std::cout << "You chose a medium pizza, the price is " << pizzaMedium << ". What toppings would you like?" << std::endl;
		std::cout << "We serve 3 menu options. 1 is pepperoni, 2 is canadian bacon, 3 is cheese." << std::endl;
		std::cin >> userToppings;
		if (userToppings == 1)
		{
			std::cout << "You chose pepperoni pizza." << std::endl;
			std::cout << "Would you like to purchase another topping for $0.99? >>>" << std::endl;
			std::cout << "We serve two menu options, option 1 is Canadian Bacon, option 2 is cheese." << std::endl;
			std::cin >> anotherTopping;
			pizzaString = "medium";
			total = pizzaMedium;
			if (anotherTopping == 1)
			{
				std::cout << "You have selected a " << pizzaString << " pepperoni and canadian bacon pizza." << std::endl;
				total = pizzaSmall + .99;
			}
			if (anotherTopping == 2)
			{
				std::cout << "You have selected a pepperoni and cheese pizza." << std::endl;
				total = pizzaSmall + .99;
			}
		}
		if (userToppings == 2)
		{
			std::cout << "You chose canadian bacon pizza." << std::endl;
			std::cout << "Would you like to purchase another topping for $0.99? >>>" << std::endl;
			std::cout << "We serve 2 menu options. 1 is pepperoni, 2 is cheese." << std::endl;
			std::cin >> anotherTopping;
			pizzaString = "medium";
			total = pizzaMedium;
			if (anotherTopping == 1)
			{
				std::cout << "You have selected a " << pizzaString << " pepperoni and canadian bacon pizza." << std::endl;
				total = pizzaMedium + .99;
			}
			if (anotherTopping == 2)
			{
				std::cout << "You have selected a canadian bacon and cheese pizza." << std::endl;
				total = pizzaMedium + .99;
			}
		}
		if (userToppings == 3)
		{
			std::cout << "You chose cheese pizza." << std::endl;
			std::cout << "Would you like to purchase another topping for $0.99? >>>" << std::endl;
			std::cout << "We serve two menu options, option 1 is pepperoni, option 2 is canadian bacon. (Type only the option number. (Ex: '1'))" << std::endl;
			std::cin >> anotherTopping;
			total = pizzaMedium;
			pizzaString = "small";
			if (anotherTopping == 1)
			{
				std::cout << "You have selected a " << pizzaString << " pepperoni and cheese pizza." << std::endl;
				total = pizzaMedium + .99;
			}
			if (anotherTopping == 2)
			{
				std::cout << "You have selected a canadian bacon and cheese pizza." << std::endl;
				total = pizzaMedium + .99;
			}
		}
	}
	if (pizzaSize == 3)
	{
		std::cout << "You chose a large pizza, the price is " << pizzaLarge << ". What toppings would you like?" << std::endl;
		std::cout << "We serve 3 menu options. 1 is pepperoni, 2 is canadian bacon, 3 is cheese." << std::endl;
		std::cin >> userToppings;
		pizzaString = "large";
		total = pizzaLarge;
		if (userToppings == 1)
		{
			std::cout << "You chose pepperoni pizza." << std::endl;
			std::cout << "Would you like to purchase another topping for $0.99? >>>" << std::endl;
			std::cout << "We serve two menu options, option 1 is Canadian Bacon, option 2 is cheese." << std::endl;
			std::cin >> anotherTopping;
			if (anotherTopping == 1)
			{
				std::cout << "You have selected a " << pizzaString << " pepperoni and canadian bacon pizza." << std::endl;
				total = pizzaLarge + .99;
			}
			if (anotherTopping == 2)
			{
				std::cout << "You have selected a pepperoni and cheese pizza." << std::endl;
				total = pizzaLarge + .99;
			}
		}
		if (userToppings == 2)
		{
			std::cout << "You chose canadian bacon pizza." << std::endl;
			std::cout << "Would you like to purchase another topping for $0.99? >>>" << std::endl;
			std::cout << "We serve 2 menu options. 1 is pepperoni. 2 is cheese." << std::endl;
			std::cin >> anotherTopping;
			if (anotherTopping == 1)
			{
				std::cout << "You have selected a " << pizzaString << " pepperoni and canadian bacon pizza." << std::endl;
				total = pizzaLarge + .99;
			}
			if (anotherTopping == 2)
			{
				std::cout << "You have selected a canadian bacon and cheese pizza." << std::endl;
				total = pizzaLarge + .99;
			}
		}
		if (userToppings == 3)
		{
			std::cout << "You chose cheese pizza." << std::endl;
			std::cout << "Would you like to purchase another topping for $0.99? >>>" << std::endl;
			std::cout << "We serve two menu options, option 1 is pepperoni, option 2 is canadian bacon. (Type only the option number. (Ex: '1'))" << std::endl;
			std::cin >> anotherTopping;
			
			if (anotherTopping == 1)
			{
				std::cout << "You have selected a " << pizzaString << " pepperoni and cheese pizza." << std::endl;
				total = pizzaLarge + .99;
			}
			if (anotherTopping == 2)
			{
				std::cout << "You have selected a canadian bacon and cheese pizza." << std::endl;
				total = pizzaLarge + .99;
			}
		}
	}

else
				{
					std::cout << "Please select an option of the menu, 1, 2, or 3. You have chosen nothing." << std::endl;
					goto pick1;
				}

			std::cout << "Your total for the " << pizzaString << " pizza is " << total << std::endl;

			system("pause");
			return 0;
	}