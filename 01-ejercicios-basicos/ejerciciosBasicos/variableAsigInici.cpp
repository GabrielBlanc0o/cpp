#include <iostream>

int main(){
	/*
	int x;
	int y,z;
	
	return 0;
	*/
	
	int ancho;
	ancho = 5;
	
	std::cout << ancho;
	
	ancho = 7;
	
	std::cout << ancho;
	
	// Para inicializar de forma mas moderna lo hacemos asi
	
	int alto { 8 };
	
	std::cout << alto;
	
	return 0;
}
