#include <bits/stdc++.h>

int main(){

	/*
	el tiempo recursivo de una funcion depende del numero de veces
	que la funcion es llamada y el tiempo de complejidad en una simple
	llamada, e totoal de tiempo de complejidad es el producto de esos 
	valores

	veamos un ejemplo

	*/

	void f(int n){
		if (n == 1 ) return ;
		f(n-1);
	}

/*	la llamada f(n) causa n cantidad de llamadas a la funcion, y la complejidad
	de tiempo de cada llamada es O(1) , porq el total de tiempo de complejidad es
	O(n) , como otro ejemplo veamos la funcion
*/

	void g (int n) {
		if ( n == 1) return;
		g(n-1);
		g(n-1);
	}

	/*siempre va tener 2 llamadas de mas excepto como podemos ver en el 
	condicional cuando es igual a 1
	asi puede seguir y si por ejemplo es -1 tendra dos y es -2 tendra cuatro
	asi siempre tendra una de mas

	y si ponemos q es 1 sera nuetra funcion q esta dentro del metodo
	g(1) = 2 pow n -1

	basado en esto el tiempo de complejidad es 1+2+4+ ...+ 2 pow n -1 = O(2n)


	*/

}