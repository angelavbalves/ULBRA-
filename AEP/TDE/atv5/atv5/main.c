//
//  main.c
//  atv5
//
//  Created by Angela Alves on 16/05/22.
//

#include <stdio.h>
//Faça um programa que leia um número N, e realize a soma dos números de 1 a N. Ao final, deve-se escrever o resultado. Esse algoritmo deve ser feito duas vezes uma usando o While e Do-While

int main() {
    int num, soma = 0;
    printf("Digite um número N: \n");
    scanf("%d%*c", &num);
    int n = 1;
    while (num >= n) {
        soma += n;
        n++;
    }
    printf("A soma de 1 até %d é %d \n", num, soma);
}

//int main() {
//    int num;
//    int n = 1;
//    int soma = 0;
//    printf("Digite um número: \n");
//    scanf("%d%*c", &num);
//    do {
//        soma += n;
//        n++;
//    } while (n <= num); {
//        printf("A soma de 1 até %d é %d\n", num, soma);
//    }
//}
