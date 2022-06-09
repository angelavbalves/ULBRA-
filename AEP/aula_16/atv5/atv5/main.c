//
//  main.c
//  atv5
//
//  Created by Angela Alves on 26/05/22.
// 5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.


#include <stdio.h>

int main() {
    int vetor[10], i, cont = 0;
    
    for (i = 0; i < 10; i++) {
        printf("Digite um valor:\n");
        scanf("%d%*c", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            cont ++;
        }
    }
    printf("O vetor possui %d número(s) par(es)\n", cont);
}
