/* Ejemplo de una funcion con su retorno
 * junto a variables inicializadas
 */

#include <iostream>

int cinco()
{
	return 5;
}

int main()
{
	[[maybe_unused]] int a{ 2 };
	[[maybe_unused]] int b{ 2 + 3 };
	[[maybe_unused]] int c{ (2 * 3) + 4 };
	[[maybe_unused]] int d{ b };
	[[maybe_unused]] int e{ cinco() };
	// std::cout << e;
	
	std::cout << 2 + 3 << "\n";

	int x{ 6 };
	int y{ x - 2 };
	std::cout << y << '\n';

	int z{};
	z = x;
	std::cout << z * x << '\n';
	
	return 0;
}
