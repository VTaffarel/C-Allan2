#include <iostream>

int main() {
    int termos = 20;
    long long a = 1, b = 1; 

    std::cout << "Os primeiros " << termos << " termos da sequência de Fibonacci são:" << std::endl;

    std::cout << a << " "; 
    for (int i = 1; i < termos; ++i) {
        std::cout << b << " "; 
        long long proximo = a + b; 
        a = b; 
        b = proximo;
    }

    std::cout << std::endl;

    return 0;
}
