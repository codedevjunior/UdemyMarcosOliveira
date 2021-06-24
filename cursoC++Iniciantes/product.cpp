#include <iostream>

int produto(int valor1, int valor2){
    return valor1 * valor2;
}

int main() {

    std::cout << "O valor do produto: " << produto(10,10) << "\n";
    return 0;
}