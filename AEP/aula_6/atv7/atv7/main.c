//
//  main.c
//  atv7
//
//  Created by Angela Alves on 14/04/22.
//

#include <stdio.h>

int main() {
    //    Faça um programa que receba quatro valores: A. B, C e I. Desses valores, I é inteiro e positivo. A. B, C são reais. Escreva os números A, B e C obedecendo à tabela a seguir.
    //    I = 1 2 ou 3
    //    1 = A, B e C: ordem crescente
    //    2 = A, B e C: ordem decrescente
    //    A, B e C: o maior fica entre os outros dois números
    int valorI;
    float valorA, valorB, valorC;
    
    printf("Digite um desses números inteiros e positivos (1, 2 ou 3): ");
    scanf("%d%*c", &valorI);
    printf("Digite um número real: ");
    scanf("%f%*c", &valorA);
    printf("Digite outro número real: ");
    scanf("%f%*c", &valorB);
    printf("Digite mais um número real: ");
    scanf("%f%*c", &valorC);
    
    if (valorI == 1) {
        if ((valorA < valorB) && (valorA < valorC)) {
            if (valorB < valorC) {
                printf("Os valores A, B e C em ordem crescente é igual a: %.2f < %.2f < %.2f", valorA, valorB, valorC);
            } else {
                printf("Os valores A, B e C em ordem crescente é igual a: %.2f < %.2f < %.2f", valorA, valorC, valorB);
            }
        }
        if ((valorB < valorA) && (valorB < valorC)) {
            if (valorA < valorC) {
                printf("Os valores A, B e C em ordem crescente é igual a: %.2f < %.2f < %.2f", valorB, valorA, valorC);
            } else {
                printf("Os valores A, B e C em ordem crescente é igual a: %.2f < %.2f < %.2f", valorB, valorC, valorA);
            }
        }
        if ((valorC < valorA) && (valorC < valorB)) {
            if ((valorA < valorB)) {
                printf("Os valores A, B e C em ordem crescente é igual a: %.2f < %.2f < %.2f", valorC, valorA, valorB);
            } else {
                printf("Os valores A, B e C em ordem crescente é igual a: %.2f < %.2f < %.2f", valorC, valorB, valorA);
            }
        }
    }
    if (valorI == 2) {
        if ((valorA < valorB) && (valorA < valorC)) {
            if (valorB < valorC) {
                printf("Os valores A, B e C em ordem decrescente é igual a: %.2f < %.2f < %.2f", valorC, valorB, valorA);
            } else {
                printf("Os valores A, B e C em ordem decrescente é igual a: %.2f < %.2f < %.2f", valorC, valorA, valorB);
            }
        } else if ((valorA > valorB) && (valorA > valorC)) {
            if (valorB > valorC) {
                printf("Os valores A, B e C em ordem decrescente é igual a: %.2f < %.2f < %.2f", valorA, valorB, valorC);
            } else {
                printf("Os valores A, B e C em ordem decrescente é igual a: %.2f < %.2f < %.2f", valorA, valorC, valorB);
            }
        } else if ((valorB> valorA) && (valorB > valorC)) {
            if ((valorA > valorC)) {
                printf("Os valores A, B e C em ordem decrescente é igual a: %.2f < %.2f < %.2f", valorB, valorA, valorC);
            } else {
                printf("Os valores A, B e C em ordem decrescente é igual a: %.2f < %.2f < %.2f", valorB, valorC, valorA);
            }
        }
    }
    if (valorI == 3) {
        if ((valorA > valorB) && (valorA > valorC)) {
            printf("A ordem desejada é: %.2f - %.2f - %.2f \n", valorB, valorA, valorC);
        } else if ((valorB > valorA) && (valorB > valorC)) {
            printf("A ordem desejada é: %.2f - %.2f - %.2f \n", valorA, valorB, valorC);
        } else if ((valorC > valorB) && (valorC>valorA)) {
            printf("A ordem desejada é: %.2f - %.2f - %.2f \n", valorA, valorC, valorB);
        }
    }
}

