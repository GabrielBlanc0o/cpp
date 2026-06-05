#include <iostream>
// #include <cstdlib>

int obtenerValorUser() 
{
    std::cout << "Ingresa un entero: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int num { obtenerValorUser() };
    std::cout << num << " doubled is: " << num * 2 << '\n';

    return 0;
}
/*
int main()
{
    return EXIT_SUCCESS; // es lo mismo que return 0

}
*/