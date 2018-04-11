//InsultAge
//04/10/18
//Author Kane Greenwalt


#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int UserAge;
	
	std::cout << "Enter your age." << std::endl;
	std::cin >> UserAge;

	if (UserAge  < 10)
	{
		std::cout << "Why don't you go change your diaper or something." << std::endl;
	}
	else if (UserAge >10 && UserAge <15)
	{
		std::cout << "Ok congrats, you stoped picking your nose. Now get off the computer." << std::endl;
	}
	else if (UserAge >15 && UserAge <20)
	{
		std::cout << "Took a break from world of warcraft huh? now get something to wipe the cheeto dust off." << std::endl;
	}
	else if (UserAge >20 && UserAge <50)
	{
		std::cout << "man really... You have nothing else better to do than look at some 17 year old's program?\n Thought by now you'd figure something out." << std::endl;
	}
	system("Pause");
	return 0;
}
