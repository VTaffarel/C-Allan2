#include <iostream>

int main() {
    char sexo;
    int contadorMasculino = 0;
    int contadorFeminino = 0;

    while (true) {
        std::cout << "Digite o sexo (M para masculino, F para feminino, ou @ para encerrar): ";
        std::cin >> sexo;

        if (sexo == '@') {
            std::cout << "Programa encerrado." << std::endl;
            break; 
        }

        if (sexo == 'M' || sexo == 'm') {
            contadorMasculino++;
        } else if (sexo == 'F' || sexo == 'f') {
            contadorFeminino++;
        } else {
            std::cout << "Sexo inválido. Use M para masculino, F para feminino ou @ para encerrar." << std::endl;
        }
    }

    std::cout << "Quantidade de pessoas do sexo masculino: " << contadorMasculino << std::endl;
    std::cout << "Quantidade de pessoas do sexo feminino: " << contadorFeminino << std::endl;

    return 0;
}
