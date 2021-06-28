#include <iostream>

int main(){

    double salarioBase;
    double horasMensais = 220.00;

    double horasExtras50;
    double horasExtras100;
    double periculosidade;
    double adicional_LV;

    double v1_50, v2_50;
    double v1_100, v2_100;
    double v1_30, v2_15;

    double salarioFinal;

    std::cout << "Digite seu salario Base: " << "\n";
    std::cin >> salarioBase;

    std::cout << "Informe a quantidade de horas extras 50%: " << "\n";
    std::cin >> horasExtras50;

    std::cout << "Informe a quantidade de horas extras 100%: " << "\n";
    std::cin >> horasExtras100;

    std::cout << "Ganha a periculosidade de 30%? 1 - Sim 2 - Não" << "\n";
    std::cin >> periculosidade;

    std::cout << "Ganha a adicional de 15%? 1 - Sim 2 - Não" << "\n";
    std::cin >> adicional_LV;

    // BASE DE CÁCULO DE HORAS EXTRAS 50%
    v1_50 = (salarioBase / horasMensais) + ((salarioBase / horasMensais) * 0.5);
    v2_50 = horasExtras50 * v1_50;

    // BASE DE CÁCULO DE HORAS EXTRAS 100%
    v1_100 = (salarioBase / horasMensais) + ((salarioBase / horasMensais) * 1.0);
    v2_100 = horasExtras100 * v1_100;

    // BASE DE CÁCULO DE PERICULOSIDADE 30% E ADICIONAL DE 15% LINHA VIVA
    v1_30 = (salarioBase * 0.3);
    v2_15 = (salarioBase * 0.15);

    if (periculosidade == 1 && adicional_LV == 1){
        salarioFinal = salarioBase + v2_50 + v2_100 + v1_30 + v2_15;
    } else if (periculosidade == 1 && adicional_LV == 2){
        salarioFinal = salarioBase + v2_50 + v2_100 + v1_30;
    } else if (periculosidade == 2 && adicional_LV == 1) {
        salarioFinal = salarioBase + v2_50 + v2_100 + v2_15;
    } else if (periculosidade == 2 && adicional_LV == 2) {
        salarioFinal = salarioBase + v2_50 + v2_100;
    } else if (periculosidade == 2 && adicional_LV == 2 && horasExtras50 == 0 && horasExtras100 == 0){
        salarioFinal = salarioBase;
    }
    
    

    std::cout << "Salário Final é " << salarioFinal << "\n";
    
    return 0;
}