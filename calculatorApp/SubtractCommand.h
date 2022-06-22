#pragma once
#include "IBaseCommand.h"
class SubtractCommand :
    public IBaseCommand
{
public:
    int Subtract(int num1, int num2) {
        return num1 - num2;
    }

    int execute(int num1, int num2) {
        return Subtract(num1, num2);
    }
};

