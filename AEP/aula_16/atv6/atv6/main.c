//
//  main.c
//  atv6
//
//  Created by Angela Alves on 26/05/22.
// 6. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida, deverá ser impresso o maior e o menor elemento do vetor.


#include <stdio.h>

int main() {
    int vetor[4], i, maior = 0, menor = 2147483647;
//    menor = valor máximo para um variavél do tipo int
    
    for (i = 0; i < 4; i++) {
        printf("Digite um número:\n");
        scanf("%d%*c", &vetor[i]);
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (menor > vetor[i]) {
            menor = vetor[i];
        }
    }
    printf("o maior vetor é %d\nO menor vetor é %d\n", maior, menor);
}
 
