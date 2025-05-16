#include <iostream>

int main() {
    std::cout << "Bilangan Ganjil dari 1 hingga 10:" << std::endl;
    for (int i = 1; i <= 10; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}