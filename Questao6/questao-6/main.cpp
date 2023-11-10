#include <iostream>
#include <cmath> 

int main() {
    int n;
    std::cout << "Digite o valor de N (quantidade de números a serem inseridos): ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        double numero;
        std::cout << "Digite o número " << i << ": ";
        std::cin >> numero;

        double metade = numero / 2;
        double raizCubica = std::cbrt(numero);

        std::cout << "Metade de " << numero << " é " << metade << std::endl;
        std::cout << "Raiz cúbica de " << numero << " é " << raizCubica << std::endl;
    }

    return 0;
}

