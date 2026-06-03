/*Realice un progrmaa que solicite al usuario que piense en
un numero entre 1 y el 100. El programa debe generar un numero
aleatorio en ese mismo rango [1-100], e indicarle al usuario si
el numero que digito es menor o mayor al numero aleatorio,
asi hasta que lo adivine. Y por ultimo mostrarle el numero
de intentos que le llevo.

variable = limite_inferior + rand() % /(limite_superior 
+1 - limite_inferior)
*/


#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

	int numero,dato,contador = 0;
	srand(time(NULL));
	dato = 1 + rand()%(100);

	do {
		cout << "DIgite un numero: " ; cin >> numero;

		if (numero > dato){
			cout << "Digite un numero menor\n";
		}
		if(numero < dato){
			cout << "Digite un numero mayor\n";
		}
		contador++;
	} while (numero != dato);


	cout<<"\nFELICIDADES ADIVINASTE EL NUMERO\n";
	cout << "NUmero de intentos: " << contador << endl;

}