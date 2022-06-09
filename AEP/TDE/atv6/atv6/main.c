//
//  main.c
//  atv6
//
//  Created by Angela Alves on 17/05/22.
//
//Efetue um programa que leia 5 números. Para cada número fornecido, escrever se ele é NULO, NEGATIVO ou POSITIVO.


#include <stdio.h>

int main() {
    int num;
    for (int i=0; i<5; i++) {
        printf("Digite um número: \n");
        scanf("%d%*c", &num);
            if (num < 0) {
                printf("%d é negativo\n", num);
            } else if (num > 0) {
                printf("%d é positivo\n", num);
            } else {
                printf("%d é nulo\n", num);
            }
    }
    
    
}
