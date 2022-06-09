//
//  main.c
//  project6
//
//  Created by Angela Alves on 06/04/22.
//

#include <stdio.h>

int main() {
    float salario, salariofinal, valordevendas, comissao;
    
    printf("Digite o seu salário R$");
    scanf("%f%*c", &salario);
    printf("Digite seu valor em vendas R$");
    scanf("%f%*c", &valordevendas);
    
    comissao = valordevendas * 4/100;
    salariofinal = salario + comissao;
    
    printf("Seu salário final foi de R$%.2f. ", salariofinal);
    printf("Sua comissão foi de R$%.2f \n", comissao);
    
}
