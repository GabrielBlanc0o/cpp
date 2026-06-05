#include <iostream>

/* Funciones */
/*
returnType functionName()
{

}
*/

// Ahora veamos un ejemplo de como podemos usar funciones para imprimir Ejemplo basico.

void imprimir()
{
    std::cout << "En impresion.\n";
}

int main()
{
    std::cout << "Iniciando main()\n";
    imprimir(); // No olvidar los parentesis despues de llamar el nombre de la funcion.
    imprimir(); // Tambien podemos llamar la funcion mas de una vez.
    std::cout << "Finalizando main()\n";
    
    return 0;
}