#pragma once
class IAria
{
public:

	virtual void Update(char input, bool isGameover, bool isFailedInput) = 0;
	virtual void Render() = 0;

private:

};

