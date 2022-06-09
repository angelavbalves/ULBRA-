//
//  main.c
//  atividade17
//
//  Created by Angela Alves on 01/04/22.
//

#include <stdio.h>

int main() {
    float deposito, imposto1, cheque1, imposto2, cheque2, saldo;
    
    printf("Digite o valor do seu depósito R$");
    scanf("%f%*c", &deposito);
    printf("Digite o valor do cheque 1 R$");
    scanf("%f%*c", &cheque1);
    printf("Digite o valor do cheque 2 R$");
    scanf("%f%*c", &cheque2);
    
    imposto1 = cheque1 * 0.38/100;
    imposto2 = cheque2 * 0.38/100;
    
    saldo = deposito - cheque1 - cheque2 - imposto1 - imposto2;
    printf("Seu saldo é igual a R$%.2f \n", saldo);
    
}
