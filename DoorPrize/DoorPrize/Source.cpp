//DoorPrize
//04/10/18
//Author Kane Greenwalt


#include<iostream>

int main()
{
	int DoorChoice;



	std::cout << "Welcome person, please pick a door 1-3." << std::endl;
	std::cin >> DoorChoice;

	if (DoorChoice == 1)
	{
		std::cout << "You got a brand new puppy!!" << std::endl;
	}
	else if (DoorChoice == 2)
	{
		std::cout << "You get puppy and a car!" << std::endl;
	}
	else if (DoorChoice == 3)
	{
		std::cout << "You get a slap in the face." << std::endl;
	}
	else
	{
		std::cout << "Bro, really? That's not a number." << std::endl;
	}


	system("Pause");
	return 0;
}
