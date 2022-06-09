//
//  main.c
//  atividade3
//
//  Created by Angela Alves on 31/03/22.
//

#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float peso1, peso2, peso3;
    float mediaponderada;
    
    printf("Digite a sua nota 1: \n");
    scanf("%f%*c", &nota1);
    printf("Digite a sua nota 2: \n");
    scanf("%f%*c", &nota2);
    printf("Digite a sua nota 3: \n");
    scanf("%f%*c", &nota3);
    
    printf("Digite o peso da sua primeira prova: \n");
    scanf("%f%*c", &peso1);
    printf("Digite o peso da sua segunda prova: \n");
    scanf("%f%*c", &peso2);
    printf("Digite o peso da sua terceira prova: \n");
    scanf("%f%*c", &peso3);
    
    mediaponderada = (nota1*peso1+nota2*peso2+nota3*peso3)/ (peso1 + peso2 + peso3);
    printf("A sua média ponderada é igual a %.2f \n", mediaponderada);
}
