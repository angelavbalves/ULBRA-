//
//  main.c
//  atv3
//
//  Created by Angela Alves on 19/05/22.
//
//Faça um programa para ler uma quantidade indeterminada de valores inteiros. Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR. O programa será encerrado imediatamente após a leitura de um valor NULO (zero) ou NEGATIVO.


#include <stdio.h>

int main() {
    int num;
    do {
        printf("Digite um  número:\n");
        scanf("%d%*c", &num);
        if (num <= 0) {
            break;
        } else {
            if (num % 2 == 0) {
            printf("%d é par \n", num);
            } else {
            printf("%d é ímpar\n ", num);
            }
        }
    } while (num != 0); {
        printf("Execute o programa novamente\n");
    }
}

//int main() {
//    int num = 0;
//
//    printf("Digite um número: \n");
//    scanf("%d%*c", &num);
//
//    do {
//        if (num % 2 == 0) {
//            printf("%d é par \n", num);
//        } else if (num % 2 == 1){
//            printf("%d é ímpar\n ", num);
//        } else if (num == 0){
//            printf("%d é nulo\n", num);
//        }
//    } while (num > 0); {
//        printf("%d é negativo", num);
//    }
//}
