//
//  main.c
//  atv5
//
//  Created by Angela Alves on 14/04/22.
//

#include <stdio.h>

int main() {
//    Declara as váriaveis
    float num1, num2, num3, num4;
//    Exibe a mensagem na tela para o usuário
    printf("Digite um número:");
    scanf("%f%*c", &num1);
    printf("Digite um número:");
    scanf("%f%*c", &num2);
    printf("Digite um número:");
    scanf("%f%*c", &num3);
    printf("Digite um número:");
    scanf("%f%*c", &num4);
    
    if (num4 > num3) {
        printf("A ordem decrescente é: %.2f < %.2f < %.2f < %.2f \n", num4, num3, num2, num1);
    } else if ((num4 > num2) && (num4 < num3)) {
        printf("A ordem decrescente é: %.2f < %.2f < %.2f < %.2f \n", num3, num4, num2, num1);
    } else if ((num4 > num1) && (num4 < num2)) {
        printf("A ordem decrescente é: %.2f < %.2f < %.2f < %.2f \n", num3, num2, num4, num1);
    } else {
        printf("A ordem decrescente é: %.2f < %.2f < %.2f < %.2f \n", num3, num2, num1, num4);
    }
}
