#pragma once
#include <string>
#include <vector>
#include "IBaseCommand.h"
#include "AddCommand.h"
#include "SubtractCommand.h"
#include "MultiplyCommand.h"
#include "DivideCommand.h"
#include "ModCommand.h"

class CalculatorProcessor
{
private:
	static CalculatorProcessor* _calculatorProcessor;
	int baseNumber;
	CalculatorProcessor() {}
	AddCommand addCommand;
	SubtractCommand subtractCommand;
	MultiplyCommand multiplyCommand;
	DivideCommand divideCommand;
	ModCommand modCommand;
	std::vector<IBaseCommand*> calcCommands = {&addCommand, &subtractCommand, &multiplyCommand, &divideCommand, &modCommand};
public:

	static CalculatorProcessor* GetInstance() {
		if (_calculatorProcessor == nullptr) {
			_calculatorProcessor = new CalculatorProcessor();
		}
		return _calculatorProcessor;
	}


	void SetBaseNumber(int number) {
		baseNumber = number;
	}

	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(const CalculatorProcessor& other) = delete;

	std::string GetDecimal() {
		return std::to_string(baseNumber);
	}

	std::string GetHexadecimal() {
		int number = baseNumber;
		int remainder = 0;
		std::string results = "";
		while (number != 0) {
			remainder = baseNumber % 16;
			if (remainder < 10) {
				results = std::to_string(remainder) + results;
			}
			else if (remainder == 10) {
				results = "A" + results;
			}
			else if (remainder == 11) {
				results = "B" + results;
			}
			else if (remainder == 12) {
				results = "C" + results;
			}
			else if (remainder == 13) {
				results = "D" + results;
			}
			else if (remainder == 14) {
				results = "E" + results;
			}
			else if (remainder == 15) {
				results = "F" + results;
			}
			number = number / 16;
		}
		results = "0x" + results;

		return results;
	}

	std::string GetBinary() {
		std::string results = "";
		int number = baseNumber;
		for (int i = 0; i < 32; i++) {
			if (number % 2 == 0) {
				results = "0" + results;
			}
			else {
				results = "1" + results;
			}
			number = number / 2;
		}

		return results;
	}

	int RunOperation(int num1, int num2, std::string operation) {
		int result = 0;
		if (operation == "*") {
			result = calcCommands[2]->execute(num1, num2);
		}
		else if (operation == "/") {
			result = calcCommands[3]->execute(num1, num2);
		}
		else if (operation == "-") {
			result = calcCommands[1]->execute(num1, num2);
		}
		else if (operation == "+") {
			result = calcCommands[0]->execute(num1, num2);
		}
		else if (operation == "%") {
			result = calcCommands[4]->execute(num1, num2);
		}
		return result;
	}

};

CalculatorProcessor* CalculatorProcessor::_calculatorProcessor = nullptr;
