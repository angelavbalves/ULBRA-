//
//  main.c
//  atv10
//
//  Created by Angela Alves on 17/05/22.
//

#include <stdio.h>
//Faça um programa para ler 10 valores inteiros. Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR.

int main() {
    int numero;
    for (int i=0; i<=9; i++) {
        printf("Digite um número: ");
        scanf("%d%*c", &numero);
        if (numero % 2 == 0) {
            printf("%d é par\n", numero);
        } else {
            printf("%d é ímpar\n", numero);
        }
    }
}
