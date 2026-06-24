#include <conio.h>
#include "TextOptions.h"
#include "Arias.h"

void init(BaseArea* areas[]);

int main()
{
	char input;

	bool isFailedInput = false;
	bool isGameover = false;

	BaseArea* areas[NUMBER_OF_AREAS];

	init(areas);
	
	while (!isGameover)
	{
		system("cls");



		if (isFailedInput)
		{
			std::cout << systemMsg[2] << std::endl;
		}

		_kbhit();
		input = _getch();

		
	}

	delete[] areas;

	return 0;
}

void init(BaseArea* areas[])
{

	areas = {};

	std::cout << "Welcome to little village" << std::endl;
};