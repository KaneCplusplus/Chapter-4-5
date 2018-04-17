//Program: dieRoll Rolling
//Date: 04/16/18
//Author: Kane Greenwalt

#include<iostream>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<string>
int main()
{
	std::string UserChoice;
	std::string diceArray[] = { 
		" ----- \n|     |\n|  .  |\n|     |\n ----- ", //one
		" ----- \n|  .  |\n|     |\n|  .  |\n ----- ", //two
		" ----- \n|   . |\n|  .  |\n| .   |\n ----- ", //three
		" ----- \n| . . |\n|     |\n| . . |\n ----- ", //four
		" ----- \n| . . |\n|  .  |\n| . . |\n ----- ", //five
		" ----- \n| . . |\n| . . |\n| . . |\n ----- " }; //six
	int DieRoll;
	int count;
	srand(time(NULL));
	
	do{
		DieRoll = rand() % 6 + 1;


		std::cout << "The goal is to roll a 2, Type 'R' when you are ready >>>>" << std::endl;
		std::cin >> UserChoice;

		if (UserChoice == "R" || UserChoice == "r")
		{
			std::cout << diceArray[(DieRoll - 1)] << std::endl;
			std::cout << DieRoll << " is what you rolled." << std::endl;
			count++;
		}
	} while (DieRoll != 2);
	std::cout << "It took you about " << count << " Tries." << std::endl;
	

	if (count < 5)
	{
		std::cout << "Nice job" << std::endl;
	}
	if (count > 5)
	{
		std::cout << "I wouldn't ever play D&D " << std::endl;
	}
	if (count > 15)
	{
		std::cout << "Ok, ok. Go do something else" << std::endl;
	}
	
	
	system("Pause");
	return 0;
}