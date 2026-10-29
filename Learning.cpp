#include <iostream>
#include <string>
#include <cmath>

int main()
{

	char op;
	double num1{};
	double num2{};
	double result{};
	
	std::cout << "======== Simple Calculator ====== \n";
	std::cout << "Enter either (+ - * /): ";
	std::cin >> op;

	std::cout << "Enter first number: ";
	std::cin >> num1;

	std::cout << "Enter second number: ";
	std::cin >> num2;

	switch(op)
	{
	case '+':
		result = num1 + num2;
		std::cout << "Result: " << result;
		break;
	case '-':
		result = num1 - num2;
		std::cout << "Result: " << result;
		break;
	case '*':
		result = num1 * num2;
		std::cout << "Result: " << result;
		break;
	case '/':
		if (num2 == 0) {
			std::cout << "Invalid number try again!";
		} else {
			result = num1 / num2;
		std::cout << "Result: " << result;
		}
		break;
	default:
		std::cout << "Invalid operator!\n";
		break;
	}
	
	std::cout << "\n*************************************\n";
	std::cout << "this wasnt bad (fuck ass calc)\n";
	std::cout << "Press a key or i'll touch you...\n";

	std::cin.ignore(1000, '\n');
	std::cin.get();
	return 0;
}
