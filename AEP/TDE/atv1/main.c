//
//  main.c
//  atv1
//
//  Created by Angela Alves on 11/05/22.
//

#include <stdio.h>
// Elabore um programa que calcule e escreva a soma de 10 números lidos. Esse algorimo deve ser feito três vezes uma usando o FOR, DO-WHILE e WHILE


int main() {
    int numero, soma;
    soma = 0;
    for (int i = 0; i< 10; i++) {
        printf("Digite um número:\n");
        scanf("%d%*c", &numero);
        soma = soma + numero;
    }
    printf("A soma é: %d\n", soma);
}

