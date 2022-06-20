#pragma once
#include <string>
class CalculatorProcessor
{
private:
	static CalculatorProcessor* _calculatorProcessor;
	int baseNumber;
	CalculatorProcessor() {}
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

	int Multiply(int num1, int num2) {
		return num1 * num2;
	}
	
	int Add(int num1, int num2) {
		return num1 + num2;
	}
	
	int Divide(int num1, int num2) {
		return num1 / num2;
	}
	
	int Subtract(int num1, int num2) {
		return num1 - num2;
	}
	int Mod(int num1, int num2) {
		return num1 % num2;
	}

};

CalculatorProcessor* CalculatorProcessor::_calculatorProcessor = nullptr;
