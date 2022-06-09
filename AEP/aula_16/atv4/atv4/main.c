//
//  main.c
//  atv4
//
//  Created by Angela Alves on 26/05/22.
//
//4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final, seu programa deverá escrever a soma dos valores encontrados nas respectivas posições  X e Y .


#include <stdio.h>

int main() {
    int x, y, j, soma = 0;
    int vetor[8];
    
    for (j = 0; j < 8; j++) {
        printf("Digite um número:\n");
        scanf("%d%*c", &vetor[j]);
    }
    
    printf("Digite a posição x do vetor: ");
    scanf("%d%*c", &x);
        
    printf("Digite a posição y do vetor: ");
    scanf("%d%*c", &y);

    soma = vetor[x] + vetor[y];
    
    printf("Soma = %d\n", soma);
}
