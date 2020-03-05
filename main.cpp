#include "data.h"

FUNCTION FUNC;

int main() {

	SetConsoleTitleA("Temperature Converter");

	std::cout << "[1] Fahrenheit [2] Celsius [3] Kelvin" << std::endl;
	std::cout << "Base Unit -> ";
	unsigned short base_unit{ 0 };
	std::cin >> base_unit;

	switch (base_unit)
	{
	case 1: FUNC.f_block();
		break;
	case 2: FUNC.c_block();
		break;
	case 3: FUNC.k_block();
		break;
	default: 
		return 0;
	}

	Sleep(20000);
	return 0;
}
