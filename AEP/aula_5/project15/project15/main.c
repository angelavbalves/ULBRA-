//
//  main.c
//  project15
//
//  Created by Angela Alves on 07/04/22.
//

#include <stdio.h>

int main () {
    float salario, multa, salariorestante;
    
    printf("Digite seu salário bruto R$");
    scanf("%f%*c", &salario);
    
    multa = (salario * 2/100)*2;
    salariorestante = salario - multa;
    
    printf("O salário restante será de %.2f \n", salariorestante);
}
