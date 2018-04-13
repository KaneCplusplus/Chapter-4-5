//Math Triangle
//04/12/2018
//author Kane Greenwalt

#include<iostream>
#include<math.h>
#include<string>
int PTriangle(void)
{

	double sideA, sideB, sideC;
	std::string userInputSide;
	std::cout << "Which side of the right triangle do you want to solve? A, B, or C" << std::endl;
	std::cin >> userInputSide;

	if (userInputSide == "C" || userInputSide == "c")
	{
		std::cout << "You chose side " << userInputSide << "What is side A >>>>" << std::endl;
		std::cin >> sideA;

		std::cout << "What is the distance for side B?" << std::endl;
		std::cin >> sideB;

		sideC = sqrt((sideA * sideA) + (sideB * sideB));
		std::cout << "The distance for side c is " << sideC;

	}
	if (userInputSide == "A" || userInputSide == "a")
	{
		std::cout << "You chose side A. What is side C?" << std::endl;
		std::cin >> sideC;

		std::cout << "What is side B?>>>>>" << std::endl;
		std::cin >> sideB;
		sideA = sqrt((sideC * sideC) - (sideB * sideB));
		std::cout << "Side A = " << sideA;
	}
	if (userInputSide == "B" || userInputSide == "b")
	{
		std::cout << "You chose side B. What is side C?" << std::endl;
		std::cin >> sideC;

		std::cout << "What is side A?>>>>>" << std::endl;
		std::cin >> sideA;
		sideB = sqrt((sideC * sideC) - (sideA * sideA));
		std::cout << "Side B = " << sideA;
	}
	system("Pause");
	return 0;
}

int isoscelesTriangle(void)
{
	double sideA, sideB, sideC;
	std::string Chosenside;

	std::cout << "Please enter the side you want to solve >>>" << std::endl;
	std::cin >> Chosenside;
	std::cout << "" << std::endl;



	system("Pause");
	return 0;
}

int main()
{
	
	PTriangle();
	isoscelesTriangle();
	
	system("Pause");
	return 0;
}