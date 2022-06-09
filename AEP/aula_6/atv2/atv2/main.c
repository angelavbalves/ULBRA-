//
//  main.c
//  atv2
//
//  Created by Angela Alves on 13/04/22.
//

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media, nota_exame;
    
    printf("Digite a nota 1: ");
    scanf("%f%*c", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f%*c", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f%*c", &nota3);
    
    media = (nota1 + nota2 + nota3)/3;
    if ((media >= 0 ) && (media < 3 )) {
        printf("Você está reprovado. Sua média é %.2f", media);
    } else if ((media >= 3) && (media < 7)) {
        printf("Você está em exame!");
        nota_exame = 12 - media;
        printf("Você deve tirar %.2f para ser aprovado. \n", nota_exame);
    } else {
        printf("Você está aprovado. Sua média é %.2f \n", media);
    }
}
