#include <iostream>

int main() {
    int N;
    long long fatorial = 1; 

    std::cout << "Digite um número inteiro positivo N: ";
    std::cin >> N;

    if (N < 0) {
        std::cout << "O número deve ser não negativo." << std::endl;
        return 1; 
    }

    for (int i = 1; i <= N; ++i) {
        fatorial *= i;
    }

    std::cout << N << "! = " << fatorial << std::endl;

    return 0;
}
