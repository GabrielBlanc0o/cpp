#include <iostream>
using namespace std;

int main(){

	cout << "Ingresa el numero para descomponer:";
	int n;
	cin >> n;

	int divisor = 2;

	while (n > 1){

		if (n%divisor == 0){
		cout << divisor << " ";
		
		n = n / divisor;

		} else {
			divisor++;
		}
	}
	return 0;
}	