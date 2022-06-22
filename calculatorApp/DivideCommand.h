#pragma once
#include "IBaseCommand.h"
class DivideCommand :
    public IBaseCommand
{
public:
    int Divide(int num1, int num2) {
        return num1 / num2;
    }

    int execute(int num1, int num2) {
        return Divide(num1, num2);
    }
};

