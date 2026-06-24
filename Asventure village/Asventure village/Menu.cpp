#include "Menu.h"
#include "TextOptions.h"

void Menu::Update(char input, bool isGameover, bool isFailedInput)
{
	switch (input)
	{
	case('1'):

		break;
	case('2'):

		break;
	case('3'):

		isGameover = true;
		std::cout << systemMsg[1] << std::endl;
		break;

	default:
		isFailedInput = true;
		break;
	}

}

void Menu::Render()
{
	for (int i = 0; i < NUMBER_OF_MENU_OPTIONS; i++)
	{
		std::cout << menuOptions[i] << std::endl;
	}
}

Menu::Menu()
{
}
