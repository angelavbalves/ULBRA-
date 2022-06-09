//
//  main.c
//  atividade7
//
//  Created by Angela Alves on 31/03/22.
//

#include <stdio.h>

int main() {
    float salariobase, imposto, salarioliquido;
    
    printf("Digite seu salário base: R$");
    scanf("%f%*c", &salariobase);
    imposto = salariobase*0.1;
    salarioliquido = salariobase + 50 - imposto;
    
    printf("O imposto que será pago é de R$%.2f \n", imposto);
    printf("O salário líquido a ser recebido será de R$%.2f \n", salarioliquido);
}
