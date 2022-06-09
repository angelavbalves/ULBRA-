//
//  main.c
//  atv1
//
//  Created by Angela Alves on 19/04/22.
//

#include <stdio.h>

int main() {
//    Declare as variáveis
    float media;
    float nota1, nota2, nota3, nota4;

//    Colete os dados
    printf("Digite a nota da primeira prova: ");
    scanf("%f%*c", &nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f%*c", &nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f%*c", &nota3);
    printf("Digite a nota da quarta prova: ");
    scanf("%f%*c", &nota4);
    
    media = (nota1 + nota2 + nota3 + nota4)/4;
    
    if (media > 7) {
        printf("Você está aprovado! Sua média é %.2f \n", media);
    } else {
        printf("Você está reprovado! Sua média é %.2f \n", media);
    }
}
