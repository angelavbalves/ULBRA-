//
//  main.c
//  atv7
//
//  Created by Angela Alves on 27/05/22.

// Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima  o vetor, o maior elemento e a posição em que ele se encontra.


#include <stdio.h>

int main() {
    int vetor[10], maiorNumero = vetor[0], i, posicaoVetor = 0;
    
    for (i = 0; i < 10; i++) {
        printf("Digite um número:\n");
        scanf("%d%*c", &vetor[i]);
        if (vetor[i] > maiorNumero) {
            maiorNumero = vetor[i];
            posicaoVetor = i;
        }
    }
    printf("Maior número no vetor é o %d e está na posição %d\n", maiorNumero, posicaoVetor);
}
