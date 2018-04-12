//Program Pizza Choice
//04/12/2018
//Author Kane Greewalt

#include<iostream>
#include<string>

int main()
{
	int userToppings; //user choosing type of pizza
	double pizzaSmall = 7.99, pizzaMedium = 8.99, pizzaLarge = 10.99; // price of pizza
	int pizzaSize; // the size of the pizza
	double total;
	

	std::cout << "Welcome to Luigi's steriotypical Pizza Joint!" << std::endl;
	std::cout << "What size would you like? \n1-Small \n2-Medium \n3-Large" << std::endl;
	std::cin >> pizzaSize;

	if (pizzaSize == 1)
	{
		std::cout << "You chose a small pizza, the price is " << pizzaSmall << " what toppings \n1-Pep \n2-Cheese \n3-Suas?" << std::endl;
		std::cin >> userToppings;
		if (userToppings == 1)
		{
			std::cout << "Small Pep it is" << std::endl;
			total = 0 + 7.99;
		}
		else if (userToppings == 2)
		{
			std::cout << "Small Cheese it is" << std::endl;
			total = 0 + 7.99;
		}
		 else if (userToppings == 3)
		{
			 std::cout << "Small Saus it is" << std::endl;
			 total = 0 + 7.99;
		}
		else 
			std::cout << "You chose nothing." << std::endl;//youchose nothing
	}
	if (pizzaSize == 2)
	{
		std::cout << " what toppings \n1-Pep \n2-Cheese \n3-Suas?" << std::endl;
		std::cin >> userToppings;
		if (userToppings == 1)
		{
			std::cout << "Medium Pep it is" << std::endl;
			total = 0 + pizzaMedium;
		}
		else if (userToppings == 2)
		{
			std::cout << "Medium Cheese it is" << std::endl;
			total = 0 + pizzaMedium;
		}
		else if (userToppings == 3)
		{
			std::cout << "Medium Saus it is" << std::endl;
			total = 0 + pizzaMedium;
		}
		else
			std::cout << "You chose nothing." << std::endl;//youchose nothing

	}
	if (pizzaSize == 3)
	{
		std::cout << "what toppings \n1 - Pep \n2 - Cheese \n3 - Suas ? " << std::endl;
		std::cin >> userToppings;
		if (userToppings == 1)
		{
			std::cout << "Medium Pep it is" << std::endl;
			total = 0 + pizzaLarge;
		}
		else if (userToppings == 2)
		{
			std::cout << "Medium Cheese it is" << std::endl;
			total = 0 + pizzaLarge;
		}
		else if (userToppings == 3)
		{
			std::cout << "Medium Saus it is" << std::endl;
			total = 0 + pizzaLarge;
		}
		else
			std::cout << "You chose nothing." << std::endl;//youchose nothing
	}
	std::cout << "Your total is " << total;
	system("Pause");
	return 0;
}