#pragma once
class IBaseCommand
{
public:
	virtual int execute(int num1, int num2) = 0;
};

