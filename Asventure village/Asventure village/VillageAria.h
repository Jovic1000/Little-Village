#pragma once
#include "BaseAria.h"
class VillageAria : public BaseArea
{
public:
	void Update(char input, bool isGameover, bool isFailedInput) override;
	void Render() override;

	VillageAria();
private:

};

