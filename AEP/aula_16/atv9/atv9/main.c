//
//  main.c
//  atv9
//
//  Created by Angela Alves on 27/05/22.

// Crie um programa que lê 6 valores num vetor inteiros pares e, em seguida, mostre na tela os valores ˆ lidos na ordem inversa.


#include <stdio.h>

int main() {
    int vetor[6], i = 0, numero, numerosPares = 0;
    
    while (numerosPares < 6) {
        printf("Digite um número par:\n");
        scanf("%d%*c", &numero);
        if (numero % 2 == 0) {
            vetor[i] = numero;
            numerosPares ++;
            i++;
        } else {
            printf("Esse número não é par.\nDigite outro número:\n");
        }
    }
    printf("--------------------\n");
    for (i = 5; i >=0; i--) {
        printf("%d\n", vetor[i]);
    }
    
}
