#include <iostream>
#include <string>

int main() {
    const int numPessoas = 20;
    std::string nome;
    int idade;
    char sexo;

    std::cout << "Entre com os dados das 20 pessoas:" << std::endl;

    for (int i = 0; i < numPessoas; ++i) {
        std::cout << "Pessoa " << i + 1 << ":" << std::endl;
        std::cout << "Nome: ";
        std::cin >> nome;
        std::cout << "Idade: ";
        std::cin >> idade;
        std::cout << "Sexo (M/F): ";
        std::cin >> sexo;

        if (sexo == 'M' && idade > 21) {
            std::cout << nome << " é do sexo masculino e tem mais de 21 anos." << std::endl;
        }
    }

    return 0;
}

