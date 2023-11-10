#include <iostream>

int main() {
    int limiteInferior, limiteSuperior;

    std::cout << "Digite o limite inferior do intervalo: ";
    std::cin >> limiteInferior;

    std::cout << "Digite o limite superior do intervalo: ";
    std::cin >> limiteSuperior;

    if (limiteInferior > limiteSuperior) {
        std::cout << "O limite inferior não pode ser maior que o limite superior." << std::endl;
        return 1; 
    }

    std::cout << "Números ímpares entre " << limiteInferior << " e " << limiteSuperior << ":" << std::endl;

    if (limiteInferior % 2 == 0) {
        limiteInferior++; 
    }

    for (int i = limiteInferior; i <= limiteSuperior; i += 2) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}

