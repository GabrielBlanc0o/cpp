#include <iostream>
int valorNum()
{
    std::cout << "Ingresa el valor del numero: ";
    int valor{};
    std::cin >> valor;
    
    return valor;
}

void resultadoMs(int num)
{
    std::cout << "" << num << "*2 " << " = " << num*2 << "\n";
}

int main()
{
    resultadoMs(valorNum());

    return EXIT_SUCCESS;
}