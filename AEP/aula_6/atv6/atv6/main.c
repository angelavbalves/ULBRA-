//
//  main.c
//  atv6
//
//  Created by Angela Alves on 14/04/22.
//

#include <stdio.h>

int main() {
    int numero, resto;
    
    printf("Digite um número para saber se é ímpar ou par: ");
    scanf("%d%*c", &numero);
    
    resto = numero%2;
    if (resto == 0) {
        printf("O resto da sua divisão é igual a 0. Seu número é par. \n");
    } else {
        printf("O resto da sua divisão é diferente de 0. Seu número é ímpar. \n");
    }
}
