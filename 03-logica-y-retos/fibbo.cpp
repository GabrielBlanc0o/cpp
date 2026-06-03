#include <iostream>
using namespace std;

int main(){

	int n ,x = 0,y = 1,z = 1;
	cout << "Ingresa un numero: "; cin >> n;

	for (int i = 0 ; i < n; i++){
		z = x+ y;
		x = y; 
		y = z;
		cout << z << " " ;
	}


}
