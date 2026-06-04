#include <iostream>

int main(){
	
	std::cout << "Ingresa el valor del primer numero: \n";
	int val1{};
	std::cin >> val1;
	
	std::cout << "Ingresa el valor del segundo numero: \n";
	int val2{};
	std::cin >> val2;
	
	std::cout << "La suma de " << val1 << " y " << val2 << " es igual a " << val1 + val2;
	
	return 0;	

}
