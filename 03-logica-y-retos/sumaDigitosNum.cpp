#include <iostream>
using namespace std;

int main(){

	int n,suma = 0 ;
	cout << "Ingresa un numero para sumar cada uno de sus digitos: ";
	cin >> n;

	while (n > 0){
		int ultimo_n = n % 10;
		suma += ultimo_n;
		n = n/10;
		
	}


	cout << suma ;



}