//DelgatosTacos
//04/11/18
//Author Kane Greenwalt
#include<iostream>
#include<string>
using std::cin;



int main()
{
	
	int NumberOfItem;
	double tacos = 2.00;
	double burritos = 1.00;
	double tostadas = 1.50;
	double enchiladas = 2.99;
	double drink = 2.00;
	double supremeBurrito = 5.50;
	double potatollas = 1.99;
	double chickenTendies = 2.88;
	double straws = 10.99;
	double cows = .99;

	double tacosOrdered = 0;
	double burritosOrdered = 0;
	double tostadasOrdered = 0;
	double enchiladasOrdered = 0;
	double drinkOrdered = 0;
	double supremeBurritoOrdered = 0;
	double potatollasOrdered = 0;
	double chickenTendiesOrdered = 0;
	double strawsOrdered = 0;
	double cowsOrdered = 0;
	std::string userChoice;
	std::cout << "                     ________________________________" << std::endl;
	std::cout << "                     |           Delgatos           |" << std::endl;
	std::cout << "                     |            tacos             |" << std::endl;
	std::cout << "***********************************************************" << std::endl;
	std::cout << "*                                                          *" << std::endl;
	std::cout << "*                                                            *" << std::endl;
	std::cout << "*                    _______________________________          *" << std::endl;
	std::cout << "*                    |                              |          *" << std::endl;
	std::cout << "*                    |                              |          *" << std::endl;
	std::cout << "*                    |                              |           **********************" << std::endl;
	std::cout << "*                    |______________________________|                              ***" << std::endl;
	std::cout << "*                                                                                 * =*" << std::endl;
	std::cout << "*                                                                                 ****" << std::endl;
	std::cout << "*                                                                                     *" << std::endl;
	std::cout << "*                                                                                     *" << std::endl;
	std::cout << "*                                                                                     *" << std::endl;
	std::cout << "*   ********                                                          ********        *" << std::endl;
	std::cout << "*****      ***********************************************************      **********" << std::endl;
	std::cout << "    * 0000 *                                                         * 0000 *         " << std::endl;
	
	std::cout << "What would you like to order? \n-tacos \n-burritos \n-tostadas \n-enchiladas \n-drink \n-supremeburrito \n-potatollas \n-chicken tenders \n-straws \n-cows" << std::endl;
	std::cin >> userChoice;
	if (userChoice =="tacos" || userChoice == "Tacos" )
	{
		std::cout << "How many tacos do you want?" << std::endl;
		std::cin >> tacosOrdered;
	}
	else if (userChoice == "Burritos" || userChoice == "burritos")
	{
		std::cout << "how many burritos would you like?" << std::endl;
		std::cin >> burritosOrdered;
	}
	else if (userChoice == "Tostadas" || userChoice == "tostadas")
	{
		std::cout << "how many tostadas would you like." << std::endl;
		std::cin >> userChoice; 
	}
	else if (userChoice == "Enchiladas" || userChoice == "enchiladas")
	{
		std::cout << "How many Enchiladas" << std::endl;
		std::cin >> enchiladasOrdered;
	}
	else if (userChoice == "Drink" || userChoice == "drink")
	{
		std::cout << "How many drink do you want." << std::endl;
		std::cin >> userChoice;
	}
	else if (userChoice == "straws" || userChoice == "Straws")
	{
		std::cout << "How many tings do you want." << std::endl;
	}
	int totalCost = (tacos * tacosOrdered) + (burritos * burritosOrdered) + (tostadas * tostadasOrdered) + (enchiladas * enchiladasOrdered) + (supremeBurrito * supremeBurritoOrdered) +
		(drink * drinkOrdered) + (potatollas * potatollasOrdered) + (chickenTendies * chickenTendiesOrdered) + (straws * strawsOrdered) + (cows * cowsOrdered);

	std::cout << "Your total is $" << totalCost << std::endl;

	system("Pause");
	return 0;
}



