#pragma once
#include <iostream>
#include <windows.h>

class FUNCTION
{
public:
	
	void f_block()
	{
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "Fahrenheit -> ";
		double base_f{ 0 };
		std::cin >> base_f;

		double converted_c{ 0 };
		double converted_k{ 0 };

		converted_c = (base_f - 32) * 5 / 9;
		converted_k = (base_f - 32) * 5 / 9 + 273.15;

		std::cout << "Celsius -> " << converted_c << std::endl;
		std::cout << "Kelvin -> " << converted_k << std::endl;

		std::cout << "-------------------------------------";

		return;
	}

	void c_block()
	{
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "Celsius -> ";
		double base_c{ 0 };
		std::cin >> base_c;

		double converted_f{ 0 };
		double converted_k{ 0 };

		converted_f = (base_c * 9 / 5) + 32;
		converted_k = base_c + 273.15;

		std::cout << "Fahrenheit -> " << converted_f << std::endl;
		std::cout << "Kelvin -> " << converted_k << std::endl;

		std::cout << "-------------------------------------";

		return;
	}

	void k_block()
	{
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "Kelvin -> ";
		double base_k{ 0 };
		std::cin >> base_k;

		double converted_c{ 0 };
		double converted_f{ 0 };

		converted_c = base_k - 273.15;
		converted_f = (base_k - 273.15) * 9 / 5 + 32;

		std::cout << "Celsius -> " << converted_c << std::endl;
		std::cout << "Fahrenheit -> " << converted_f << std::endl;

		std::cout << "-------------------------------------";

		return;
	}

};
