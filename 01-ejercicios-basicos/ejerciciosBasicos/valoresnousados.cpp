#include <iostream>
int main()
{
	// cuando una variable no es usada podemos usar [[maybe_unused]] para q deje compilar

	double pi {3.141519};
	[[maybe_unused]] double gravedad {9.8};
	double phi {1.61803};
	
	std::cout << pi << "\n"; 
	std::cout << phi << "\n"; 
	
	
	int x{5};
	std::cout << "x es igual a : " << x <<"\n"; 
	
	std::cout << "Esto es un salto de linea :" << std::endl;
	std::cout << "mira";
	
	
	return 0;
}
