#include <iostream>
int main(){

	std::cout << "Ingresa un numero: ";
	
	int x{};
	std::cin >> x;
	
	std::cout << "Tu ingresaste " << x << '\n';
	std::cout << "Ingresa 3 numeros separados por un espacio: ";
	
	int y{};
	int z{};
	int w{};
	
	std::cin >> y >> z >> w;
	std::cout << "Tu ingresaste " << y << ", " << z << ", " << "y " <<w << "\n";

	// para ver cuantos bytes de memoria ocupa un valor
	
	std::cout << sizeof(int) << '\n';
	return 0;	
}
