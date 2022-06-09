//
//  main.c
//  project23
//
//  Created by Angela Alves on 07/04/22.
//

#include <stdio.h>
#include <math.h>
#define TOTAL 180

int main() {
    float angulo1, angulo2, angulo3;
    
    printf("Digite um dos ângulos do seu triângulo: ");
    scanf("%f%*c", &angulo1);
    printf("Digite o outro ângulo do seu triângulo: ");
    scanf("%f%*c", &angulo2);

    angulo3 = TOTAL - angulo1 - angulo2;
    printf("O ângulo faltante do seu triângulo tem %.2f° \n", angulo3);
}
