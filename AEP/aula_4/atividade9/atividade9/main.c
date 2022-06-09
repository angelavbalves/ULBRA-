//
//  main.c
//  atividade9
//
//  Created by Angela Alves on 31/03/22.
//

#include <stdio.h>

int main() {
    float base, altura, area;
    
    printf("Digite a base do seu triângulo em centímetros: \n");
    scanf("%f%*c", &base);
    printf("Digite a altura do seu triângulo em centímetros: \n");
    scanf("%f%*c", &altura);
    
    area = (base*altura)/2;
    printf("A área do seu triângulo é %.2f centímetros quadrados \n", area);
}
