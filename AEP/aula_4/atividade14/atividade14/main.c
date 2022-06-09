//
//  main.c
//  atividade14
//
//  Created by Angela Alves on 31/03/22.
//

#include <stdio.h>

int main() {
    int anodenascimento, anoatual, idade, futuraidade;
    
    printf("Digite seu ano de nascimento: \n");
    scanf("%d%*c", &anodenascimento);
    printf("Digite o ano atual: \n");
    scanf("%d%*c", &anoatual);
    
    idade = anoatual - anodenascimento;
    futuraidade = 2050 - anodenascimento;
    
    printf("Sua idade atual é igual a %.0d anos. \n", idade);
    printf("Sua idade em 2050 será de %.0d anos. \n", futuraidade);
}
