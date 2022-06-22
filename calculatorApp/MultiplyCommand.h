#pragma once
#include "IBaseCommand.h"
class MultiplyCommand :
    public IBaseCommand
{
public:
    int Multiply(int num1, int num2) {
        return num1 * num2;
    }

    int execute(int num1, int num2) {
        return Multiply(num1, num2);
    }
};

