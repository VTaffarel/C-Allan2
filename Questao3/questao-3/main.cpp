#include <iostream>

int main() {
    for (int i = 10; i <= 30; ++i) {
        if (i % 3 == 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}
