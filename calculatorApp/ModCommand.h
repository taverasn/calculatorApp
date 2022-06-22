#pragma once
#include "IBaseCommand.h"
class ModCommand :
    public IBaseCommand
{
public:
    int Mod(int num1, int num2) {
        return num1 % num2;
    }

    int execute(int num1, int num2) {
        return Mod(num1, num2);
    }
};

