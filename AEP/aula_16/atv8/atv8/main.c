//
//  main.c
//  atv8
//
//  Created by Angela Alves on 27/05/22.

//8. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ na ordem inversa.


#include <stdio.h>

int main() {
    int vetor[6], i;
    
    for (i = 0; i < 6; i++) {
        printf("Digite um número\n");
        scanf("%d%*c", &vetor[i]);
    }
    printf("-----------------------\n");
    for (i = 5; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }
}
