#include <iostream>
#include <climits> 

int main() {
    const int numPessoas = 20;
    int idade;
    int somaIdades = 0;
    int maiorIdade = INT_MIN;
    int menorIdade = INT_MAX;

    for (int i = 1; i <= numPessoas; ++i) {
        std::cout << "Digite a idade da pessoa " << i << ": ";
        std::cin >> idade;

        somaIdades += idade;

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        if (idade < menorIdade) {
            menorIdade = idade;
        }
    }

    double mediaIdades = static_cast<double>(somaIdades) / numPessoas;

    std::cout << "Média das idades: " << mediaIdades << std::endl;
    std::cout << "Maior idade: " << maiorIdade << std::endl;
    std::cout << "Menor idade: " << menorIdade << std::endl;

    return 0;
}
