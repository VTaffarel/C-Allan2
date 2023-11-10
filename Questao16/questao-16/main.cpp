#include <iostream>
#include <climits> 

int main() {
    int idade;
    int menorIdade = INT_MAX; 
    int maiorIdade = INT_MIN; 
    int totalIdades = 0;
    int contador = 0;

    while (true) {
        std::cout << "Digite a idade (ou -1 para encerrar): ";
        std::cin >> idade;

        if (idade == -1) {
            if (contador == 0) {
                std::cout << "Nenhuma idade foi inserida. Programa encerrado." << std::endl;
            } else {
                double media = static_cast<double>(totalIdades) / contador;
                std::cout << "Menor idade: " << menorIdade << std::endl;
                std::cout << "Maior idade: " << maiorIdade << std::endl;
                std::cout << "Média aritmética das idades: " << media << std::endl;
                std::cout << "Programa encerrado." << std::endl;
            }
            break; 
        }

        if (idade < -1) {
            std::cout << "Idade inválida. Use valores não negativos ou -1 para encerrar." << std::endl;
        } else {
            totalIdades += idade;
            contador++;

            if (idade < menorIdade) {
                menorIdade = idade;
            }

            if (idade > maiorIdade) {
                maiorIdade = idade;
            }
        }
    }

    return 0;
}
