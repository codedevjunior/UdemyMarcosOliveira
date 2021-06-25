#include <iostream>

void minha_funcao() {
    std::cout << "Essa é uma função" << "\n";
}

int soma(int x, int y){
    return x + y;
}

int main()
{

    minha_funcao();
    std::cout << soma(3,10) << "\n";
    std::cout << soma(20,10) << "\n";
    std::cout << soma(30,10) << "\n";

    char caracter {'a'};
    std::string palavras = "ass";

    std::cout << "O valor de a é: " << caracter << "\n";

    std::cout << "O valor direto para MAIÚCULO de a é: " << toupper( caracter ) << "\n";

    caracter = toupper( caracter );
    std::cout << "O valor de caracter é: " << caracter << "\n";
    std::cout << "O valor das palavras é: " << palavras << "\n";

    return 0;
}