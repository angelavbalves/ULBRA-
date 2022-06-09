//
//  main.c
//  project21
//
//  Created by Angela Alves on 08/04/22.
//

#include <stdio.h>

int main() {
    float numerohorastrabalhadas, valordahoratrabalhada;
    float salariominimo;
    float numerodehorasextras, valordahoraextra, valorareceber;
    float salariofinal, salariobruto;
    
    printf("Digite o número de horas trabalhadas: \n");
    scanf("%f%*c", &numerohorastrabalhadas);
    printf("Digite o valor do salário mínimo R$");
    scanf("%f%*c", &salariominimo);
    printf("Digite o número de horas extras trabalhadas: \n");
    scanf("%f%*c", &numerodehorasextras);
    
    valordahoratrabalhada = salariominimo/8;
    valordahoraextra = salariominimo/4;
    salariobruto = numerohorastrabalhadas * valordahoratrabalhada;
    valorareceber = numerodehorasextras * valordahoraextra;
    
    salariofinal = salariobruto + valorareceber;
    printf("O seu salário final é de R$%.2f \n", salariofinal);
    printf("Você irá receber R$%.2f referente às horas extras trabalhadas. \n", valorareceber);
    
}
