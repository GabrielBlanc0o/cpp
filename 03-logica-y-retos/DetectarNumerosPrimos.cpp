#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n;

	cout << " Ingresa un numero para ver si es primo o no: ";
	cin >> n;


	if (n<=1){

		cout << "No es primo";
		return 0;
	}

	float res = sqrt(n);
	bool status = true;

	for (int i = 2 ; i <= res;i++){
		if (n%i== 0 ){
			status= false;
			break;
		}
	}


	if (status){
		cout << "Es primo";
	} else {
		cout << "No es primo";
	}

	return 0;
}










