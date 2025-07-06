// Chapter 4 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//This code displays the amount of days in a month and accounts for Febuary during leap years.
int main()
{

	int MONTH;//represents months, should be between 1 and 12, 1 being January and 12 being December
	int YEAR;// asked for incase 2 is input 
	int MONTHL = 1;//lower limit of what can be input for MONTH which is January
		int MONTHU = 12;//Upper limit of what can be input for MONTH which is December
	
		bool valid = false;


		while (!valid) {//continues in a loop incase a number below 1 or above 12 is input for MONTH
			std::cout << "Enter the month \n";
			std::cin >> MONTH;


			if (MONTH >= MONTHL && MONTH <= MONTHU)//THE LOOP ENDS AND GOES ONTO NEXT STEP
			{
				valid = true;//ends loop
				std::cout << "Enter the year \n";//goes onto next step and that is to enter the year
				std::cin >> YEAR;
			}

			else

				std::cout << "Error, enter a value between 1 and 12 \n";//forces user to go back and input a command again
				

				cin.clear();
				cin.ignore(1000000000,'\n');



	}



		int FEB{};


	if (YEAR % 100 == 0)//testing if divisible by 100 for leap year test
	{
		if (YEAR % 400 == 0)//nested if, testing the second layer to see if leap year, if divisible by 400, then leap year
			 FEB = 29;

		else//not divisible by 400, so not leap year

			 FEB = 28;

	}
	else{//not divisible by 100, so another, different, leap year test will be in place
	
		if (YEAR % 4 == 0)//if divisible by 4, then its a leap year
			 FEB = 29;


			else // not divisible by 4 so not a leap year


			 FEB = 28;
		


	}

	
		

	switch (MONTH)//all the different responses for each different month and the days they have
	{
		case'1':
		case'3':
		case'5':
		case'7':
		case'8':
		case'10':
		case'12':std::cout << "31 days \n";
			break;
		case'4':
		case'6':
		case'9':
		case'11':std::cout << "30 days \n";
			break;
		case'2':std::cout << FEB << " days \n";
			//I put in variable here chosen from the year choice to determine how many days February has
			//The days are the output
			




	}








	return 0;
}

