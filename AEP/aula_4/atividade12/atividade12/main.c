//
//  main.c
//  atividade12
//
//  Created by Angela Alves on 31/03/22.
//

#include <stdio.h>
#include <math.h>

int main() {
    double numero1, numero2;
    double resultado1, resultado2;
    
    printf("Digite um número que seja maior que zero: \n");
    scanf("%lf%*c", &numero1);
    printf("Digite outro número maior que zero: \n");
    scanf("%lf%*c", &numero2);
    
    resultado1 = pow(numero1, numero2);
    resultado2 = pow(numero2, numero1);
    
    printf("O número 1 elevado ao número 2 é igual à %.2lf \n", resultado1);
    printf("O número 2 elevado ao número 1 é igual à %.2f \n", resultado2);
    
}
