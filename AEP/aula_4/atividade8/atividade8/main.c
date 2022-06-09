//
//  main.c
//  atividade8
//
//  Created by Angela Alves on 31/03/22.
//

#include <stdio.h>

int main() {
    float deposito, taxa, juros, rendimento;
    
    printf("Digite o valor do seu depósito R$");
    scanf("%f%*c", &deposito);
    printf("Digite a sua taxa de juros: ");
    scanf("%f%*c", &taxa);
    
    juros = (taxa/100)*deposito;
    rendimento = deposito + juros;
    
    printf("Seu juros será de R$%.2f \n", juros);
    printf("Seu rendimento total será de R$%.2f \n", rendimento);
}
