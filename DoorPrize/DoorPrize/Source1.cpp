//Guessing Game
//04/10/18
//Author Kane Greenwalt


#include<iostream>
#include <stdlib.h>
#include <time.h>
#include <random>
int main()
{
	int NumChoice;
	int secret;

	srand(time(NULL));
	secret = rand() % 10 + 1;

	std::cout << "Welcome person, please pick a number between 1-10." << std::endl;
	std::cin >> NumChoice;

	if (NumChoice == secret)
	{
		std::cout << "Congrats, you guessed " << secret << " the correct number." << std::endl;
	}
	else
	{
		std::cout << "You chose poorly. The number was " << secret << "." << std::endl;
	}
	system("Pause");
	return 0;
}
