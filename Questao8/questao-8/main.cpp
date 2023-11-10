#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> numero;

    if (numero <= 0) {
        std::cout << "O número deve ser inteiro positivo." << std::endl;
        return 1; 
    }

    std::cout << "Tabuada de multiplicação de " << numero << ":" << std::endl;

    for (int i = 1; i <= 10; ++i) {
        int resultado = numero * i;
        std::cout << numero << " x " << i << " = " << resultado << std::endl;
    }

    return 0;
}

