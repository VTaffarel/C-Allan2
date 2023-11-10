#include <iostream>

int main() {
    int n;
    std::cout << "Digite o valor de N (quantidade de números a serem analisados): ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "N deve ser um número inteiro positivo." << std::endl;
        return 1; 
    }

    double numero;
    double soma = 0;
    double maior, menor;

    for (int i = 1; i <= n; ++i) {
        std::cout << "Digite o número " << i << ": ";
        std::cin >> numero;

        soma += numero;

        if (i == 1) {
            maior = menor = numero; 
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }

    std::cout << "O somatório dos " << n << " números é: " << soma << std::endl;
    std::cout << "O maior número é: " << maior << std::endl;
    std::cout << "O menor número é: " << menor << std::endl;

    return 0;
}
