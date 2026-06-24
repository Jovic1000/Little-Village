#include <iostream>
#include <conio.h>
#include "TextOptions.h"

using namespace std;

int main()
{
	char input;

	bool isFailedInput = false;
	bool isGameover = false;

	while (!isGameover)
	{
		system("cls");

		cout << "Welcome to little village" << endl;

		for (int i = 0; i < NUMBER_OF_MENU_OPTIONS; i++)
		{
			cout << menuOptions[i] << endl;
		}
		
		if (isFailedInput)
		{
			cout << systemMsg[2] << endl;
		}



		_kbhit();
		input = _getch();

		switch (input)
		{
		case('1'):

				break;
		case('2'):

				break;
		case('3'):

			isGameover = true;
			cout << systemMsg[1] << endl;
				break;

			default:
				isFailedInput = true;
				break;
		}

	}

	return 0;
}