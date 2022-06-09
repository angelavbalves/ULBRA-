//
//  main.c
//  atv3
//
//  Created by Angela Alves on 11/05/22.
//

// Efetue um programa que mostre todos os números inteiros ímpares situados numa  faixa de dois números digitados pelo usuário. Esse algoritmo deve ser feito duas vezes uma usando o WHILE e DO-WHILE


#include <stdio.h>

//int main() {
//    int nInicial, nFinal;
//
//    printf("Digite o número inicial: ");
//    scanf("%d%*c", &nInicial);
//    printf("Digite o número final: ");
//    scanf("%d%*c", &nFinal);
//
//    for (int i=nInicial; i<nFinal; i++) {
//        if (i % 2 != 0) {
//            printf("O número %d é ímpar.\n", i);
//        }
//    }
//}

//int main() {
//    int nInicial, nFinal;
//
//    printf("Digite o número inicial: ");
//    scanf("%d%*c", &nInicial);
//    printf("Digite o número final: ");
//    scanf("%d%*c", &nFinal);
//    int i = nInicial;
//
//    while (i < nFinal) {
//        if (i % 2 != 0) {
//            printf("O número %d é ímpar.\n", i);
//        }
//        i++;
//    }
//}

int main() {
    int nInicial, nFinal;
    
    printf("Digite o número inicial: ");
    scanf("%d%*c", &nInicial);
    printf("Digite o número final: ");
    scanf("%d%*c", &nFinal);
    
    int i = nInicial;
    
    do {
        if (i % 2 !=0) {
            printf("O número %d é ímpar.\n", i);
        }
        i++;
    } while (i < nFinal);
}
