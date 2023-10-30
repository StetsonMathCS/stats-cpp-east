#include <iostream>
#include "mode_calculator.h"

int main() {
    ModeCalculator calculator;
    float val;
    while(std::cin >> val) {
        calculator.handleValue(val);
    }

    float mode = calculator.getResult();

    std::cout << "The mode is: " << mode << std::endl;

    return 0;
}#include <iostream>
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
