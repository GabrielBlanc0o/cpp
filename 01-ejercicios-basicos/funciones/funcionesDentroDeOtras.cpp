/**
 * Ahora veremos como otras funciones ya creadas pueden llamar a otras 
 * 
 * REGLAS :
 * Funciones dentro del main no funcionan , solo afuera deben ser creadas
 * 
 */
#include <iostream> // para std::cout
void hacerB()
{
    std::cout << "En hacerB()\n";
}

void hacerA()
{
    std::cout << "Iniciando hacerA()\n";

    hacerB();

    std::cout << "Finalizando hacerA()\n";
}

// Definicion de la funcion main()
int main()
{
    std::cout << "Iniciando main()\n";

    hacerA();

    std::cout << "Finalizando main()\n";
    
    return 0;
}

// Output 
    // Iniciando main()
    // Iniciando hacerA()
    // En hacerB()
    // Finalizando hacerA()
    // Finalizando main()