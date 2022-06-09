//
//  main.c
//  atv4
//
//  Created by Angela Alves on 14/04/22.
//

#include <stdio.h>

int main() {
    float numero1, numero2, numero3;
    
    printf("Digite um número: ");
    scanf("%f%*c", &numero1);
    printf("Digite um número: ");
    scanf("%f%*c", &numero2);
    printf("Digite um número: ");
    scanf("%f%*c", &numero3);
    
    if ((numero1 < numero2) && (numero1 < numero3)) {
        if ((numero2 < numero3)) {
            printf("A ordem crescente é %.2f < %.2f < %.2f", numero1, numero2, numero3);
        } else {
            printf("A ordem crescente é %.2f < %.2f < %.2f", numero1, numero3, numero2);
        }} else if ((numero2 < numero1) && (numero2 < numero3)) {
                if (numero1 < numero3) {
                    printf("A ordem crescente é %.2f < %.2f < %.2f", numero2, numero1, numero3);
                } else {
                    printf("A ordem crescente é %.2f < %.2f < %.2f", numero2, numero3, numero1);
        } } else if ((numero3 < numero2) && (numero3 < numero1)) {
                if (numero1 < numero2) {
                    printf("A ordem crescente é %.2f < %.2f < %.2f", numero3, numero1, numero2);
                } else {
                    printf("A ordem crescente é %.2f < %.2f < %.2f", numero3, numero2, numero1);
            }
        }
    }

