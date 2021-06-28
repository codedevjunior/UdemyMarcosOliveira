#include <iostream>
#define PI 3.14

int main(){

  const double pi = 3.14;
  std::string nome;
  std::cout << "O valor de PI: " << PI << "\n";
  std::cout << "O valor de pi: " << pi << "\n";

  std::cout << "Digite seu nome: " << "\a";
  std::cin >> nome;

  return 0;
}
