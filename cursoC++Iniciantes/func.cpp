#include <iostream>

using namespace std;

void minha_funcao() {
    cout << "Essa é uma função" << endl;
}

int soma(int x, int y){
    return x + y;
}

int main()
{

    minha_funcao();
    cout << soma(3,10) << endl;

    return 0;
}