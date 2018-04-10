//


#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int NumChoice;
	int secret;
	int count = 1;
	srand(time(NULL));
	secret = rand() % 100 + 1;

	do{
		std::cout << "Please pick a number between 1-100" << std::endl;
		std::cin >> NumChoice;

		if (NumChoice > secret)
		{
			std::cout << "Lower m8" << std::endl;
			count++;
		}
		else if (NumChoice < secret)
		{
			std::cout << "Higher silly billy." << std::endl;
			count++;
		}

	} while (NumChoice != secret);

	std::cout << "Congralations! it took you " << count << " Tries." << std::endl;


	system("Pause");
	return 0;
}