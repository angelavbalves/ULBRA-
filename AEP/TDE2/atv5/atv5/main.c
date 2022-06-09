//
//  main.c
//  atv5
//
//  Created by Angela Alves on 25/05/22.
//
//Ler uma quantidade indeterminada de duplas de valores (2 valores de cada vez). Escrever para cada dupla uma mensagem que indique se ela foi informada em ordem crescente ou decrescente. A repetição será encerrada ao ser fornecido, para os elementos da dupla, valores iguais.
//
//[Para os dados de entrada abaixo]
//[Deve ser gerada a seguinte saída]
//5   4
//7   2
//3   8
//2   2
//Decrescente
//Decrescente
//Crescente

#include <stdio.h>

//int main() {
//    int num1, num2;
//
//    printf("Digite um valor:\n");
//    scanf("%i%*c", &num1);
//    printf("Digite outro valor:\n");
//    scanf("%d%*c", &num2);
//
//    if (num1 > num2) {
//        printf("Os números foram digitados em ordem decrescente\n");
//    } else if (num2 > num1) {
//        printf("Os números foram digitados em ordem crescente\n");
//    } else {
//        printf("Os números são iguais\n");
//    }
//}

int main() {
    int num1, num2;
    
    do {
        printf("Digite um valor:\n");
        scanf("%i%*c", &num1);
        printf("Digite outro valor:\n");
        scanf("%d%*c", &num2);
        if (num1 == num2) {
            break;
        } else {
            if (num1 > num2) {
                printf("Os números foram digitados em ordem decrescente\n");
            } else if (num2 > num1) {
                printf("Os números foram digitados em ordem crescente\n");
            } else {
                printf("Os números são iguais\n");
            }
        }
    } while (num1 != num2);
    printf("Os números digitados são iguais\n");

}


