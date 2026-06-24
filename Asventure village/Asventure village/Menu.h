#pragma once
#include "BaseAria.h"
class Menu : public BaseArea
{
public:

	void Update(char input, bool isGameover, bool isFailedInput) override;
	void Render() override;

	Menu();

private:

};

