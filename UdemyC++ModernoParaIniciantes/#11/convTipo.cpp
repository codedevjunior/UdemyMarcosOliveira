/*

  CONVERSÃO DE TIPOS EM C++

  É possivel converter dados de um tipo em outro. Isso é conhecido como conver-
  são de tipo. Existem dois tipos de conversão de tipo em C++.

  I. Conversão implícita
  II. Conversão explícita (também conhecida como Type Casting)

*/

#include <iostream>

int main(){

  double valor = 3.14;
  int numero = valor;
  char letra = 'c';

  std::string palavra = "Algo";

  std::cout << "O valor de 'valor' é " << valor << "\n";
  std::cout << "O valor de 'numero' é " << numero << "\n";
  std::cout << "O valor de 'letra' é " << letra << "\n";

  numero = letra;
  std::cout << "O valor de 'numero' é " << numero << "\n";
  numero = numero + letra;
  std::cout << "O valor de 'numero' é " << numero << "\n";
  std::cout << "O valor de 'palavra' é " << palavra << "\n";

  std::cout << "\n\nConversão de valores explicito: " << "\n\n";




  return 0;
}
