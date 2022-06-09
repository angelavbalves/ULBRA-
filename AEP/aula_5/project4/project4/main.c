//
//  main.c
//  project4
//
//  Created by Angela Alves on 06/04/22.
//

#include <stdio.h>

int main() {
    float nota1, nota2, mponderada;
    
    printf("Digite sua nota 1: \n");
    scanf("%f%*c", &nota1);
    printf("Digite a sua nota 2: \n");
    scanf("%f*c", &nota2);
    
    mponderada = (nota1*2) + (nota2*3)/5;
    printf("A sua média ponderada é igual a %.2f. \n", mponderada);
}
