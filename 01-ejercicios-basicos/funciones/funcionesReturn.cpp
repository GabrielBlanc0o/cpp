#include <iostream>

int main()
{
    //obtener el valor del usuario

    std::cout << "Ingresa un entero: ";
    int num{};
    std::cin >> num;

    // imprimir el valor duplicado
    std::cout << num << " por 2 es " << num * 2 << '\n';

    return 0;

}