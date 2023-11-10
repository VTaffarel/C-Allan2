#include <iostream>

int main() {
    const int numNumeros = 20;
    int numero;
    int somaPares = 0;
    int somaImpares = 0;
    int qtdPares = 0;
    int qtdImpares = 0;

    for (int i = 1; i <= numNumeros; ++i) {
        std::cout << "Digite o número " << i << ": ";
        std::cin >> numero;

        if (numero % 2 == 0) {
            somaPares += numero;
            qtdPares++;
        } else {
            somaImpares += numero;
            qtdImpares++;
        }
    }

    double mediaPares = (qtdPares > 0) ? static_cast<double>(somaPares) / qtdPares : 0;
    double mediaImpares = (qtdImpares > 0) ? static_cast<double>(somaImpares) / qtdImpares : 0;

    std::cout << "Média dos números pares: " << mediaPares << std::endl;
    std::cout << "Média dos números ímpares: " << mediaImpares << std::endl;

    return 0;
}
