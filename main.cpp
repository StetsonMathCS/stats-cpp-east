#include <iostream>
#include "min_calculator.h"

int main() {
	MinCalculator calculator;
	float val;
	while(std::cin >> val) {
		calculator.handleValue(val);
	}

	float min = calculator.getResult();

	std::cout << "The min is: " << min << std::endl;

	return 0;
}
