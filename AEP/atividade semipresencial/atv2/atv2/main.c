//
//  main.c
//  atv2
//
//  Created by Angela Alves on 19/04/22.
//

#include <stdio.h>

int main() {
    float nota1, nota2, media;
    
    printf("Digite a nota 1: ");
    scanf("%f%*c", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f%*c", &nota2);
    
    media = (nota1 + nota2)/2;
    if ((media >= 0 ) && (media < 4 )) {
        printf("Você está reprovado. Sua média é %.2f", media);
    } else if ((media >= 4) && (media < 7)) {
        printf("Você está em exame!");
    } else {
        printf("Você está aprovado. Sua média é %.2f \n", media);
    }
}
