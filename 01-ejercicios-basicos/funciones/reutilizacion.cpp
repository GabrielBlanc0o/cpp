#include <iostream>
#include <cstdlib>

int obtenerValor()
{
    std::cout << "Ingresa un entero: ";
    int input{};
    std::cin >> input;
    return input;
}

/* usando funciones evitamos ser redundantes y aplicar modularidad a nuestro codigo. */
int main()
{
    int x { obtenerValor() };
    int y { obtenerValor() };

    std::cout << "x" << " + " << "y" << " = " << x + y << "\n";

    return EXIT_SUCCESS;
}