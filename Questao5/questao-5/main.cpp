#include <iostream>
#include <cmath> 

int main() {
    const int quantidadeNumeros = 10;
    double numero;
    
    for (int i = 1; i <= quantidadeNumeros; ++i) {
        std::cout << "Digite o número " << i << ": ";
        std::cin >> numero;

        double metade = numero / 2;
        double raizCubica = std::cbrt(numero);

        std::cout << "Metade de " << numero << " é " << metade << std::endl;
        std::cout << "Raiz cúbica de " << numero << " é " << raizCubica << std::endl;
    }

    return 0;
}

