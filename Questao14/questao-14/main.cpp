#include <iostream>

int main() {
    int numero;

    while (true) {
        std::cout << "Digite um número (ou -1 para sair): ";
        std::cin >> numero;

        if (numero == -1) {
            std::cout << "Programa encerrado." << std::endl;
            break; 
        }

        if (numero < 0) {
            std::cout << "Por favor, insira apenas números positivos." << std::endl;
            continue; 
        }

        if (numero % 2 == 0) {
            std::cout << numero << " é par." << std::endl;
        } else {
            std::cout << numero << " é ímpar." << std::endl;
        }
    }

    return 0;
}
