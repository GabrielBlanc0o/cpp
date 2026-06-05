#include <iostream>

int doubleNumber (int x)
{
    return 2 * x;
}



int main(){

    std::cout << "Enter a number: ";
    int val{};
    std::cin >> val;

    std::cout << "Double of " << val << " is " << doubleNumber(val) << '\n';
}