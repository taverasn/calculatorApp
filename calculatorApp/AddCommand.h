#pragma once
#include "IBaseCommand.h"
class AddCommand :
    public IBaseCommand
{
public:
    int Add(int num1, int num2) {
        return num1 + num2;
    }

    int execute(int num1, int num2) {
        return Add(num1, num2);
    }
};

