#include <iostream>

int main(){

  std::cout << "1. Arrays de vetores" << "\n\n";

  std::string vetor[3] = {"Vilson", "Pedro", "James"};
  vetor[0] = "VilsonJunior";
  std::cout << vetor[0] << "\n\n";

  std::cout << "2. Arrays de matrizes" << "\n\n";

  std::string matriz[3][4]; // [coluna] [linha]

  // 3 colunas
  matriz[0][0] = "Vilson"; // linha 1
  matriz[0][1] = "Pedro"; // linha 2
  matriz[0][2] = "Jesus"; // linha 3
  matriz[0][3] = "João"; // linha 4

  matriz[1][0] = "Allyson";
  matriz[1][1] = "Vampeta";
  matriz[1][2] = "Rogerio";
  matriz[1][3] = "Orlando";

  matriz[2][0] = "VilsonJesuino";
  matriz[2][1] = "PedroJesuino";
  matriz[2][2] = "JesusJesuino";
  matriz[2][3] = "JoãoJesuino";

  std::cout << matriz[0][3] << "\n";

  return 0;
}
