//
//  main.c
//  atv2
//
//  Created by Angela Alves on 19/05/22.
//
//Faça um programa para repetir a leitura de um número enquanto o valor fornecido for diferente de 0. Para cada número fornecido, escrever se ele é NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve ser encerrada sem escrever mensagem alguma.

#include <stdio.h>

int main() {
    int num;

    do {
        printf("Digite um número:\n");
        scanf("%d%*c", &num);
        if (num > 0) {
            printf("%d é positivo\n", num);
        } else if (num < 0){
            printf("%d é negativo\n", num);
        } else {
        }
    } while (num != 0); {
    }
}

