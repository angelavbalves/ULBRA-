//
//  main.c
//  atividade6
//
//  Created by Angela Alves on 31/03/22.
//

#include <stdio.h>

int main() {
    float salariobase, imposto, bonus, salarioliquido;
    
    printf("Digite seu salário base R$");
    scanf("%f%*c", &salariobase);
//    IMPOSTO DE 7%
    imposto = salariobase*0.07;
//    GRATIFICAÇÃO DE 5%
    bonus = salariobase*0.05;
    salarioliquido = salariobase + bonus - imposto;
    
    printf("Você vai pagar R$%.2f de imposto \n", imposto);
    printf("Você vai receber R$%.2f de bonificação \n", bonus);
    printf("Seu salário líquido será de R$%.2f \n", salarioliquido);
}
