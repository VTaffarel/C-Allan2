#include <iostream>

int main() {
    int n;
    std::cout << "Digite o valor de N (quantidade de números a serem somados): ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "N deve ser um número inteiro positivo." << std::endl;
        return 1;
    }

    double soma = 0;
    for (int i = 1; i <= n; ++i) {
        double numero;
        std::cout << "Digite o número " << i << ": ";
        std::cin >> numero;
        soma += numero;
    }

    std::cout << "O somatório dos " << n << " números é: " << soma << std::endl;

    return 0;
}
