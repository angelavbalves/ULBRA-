//
//  main.c
//  atividade10
//
//  Created by Angela Alves on 31/03/22.
//

#include <stdio.h>

int main() {
    float raio, area;
    
    printf("Digite o raio do seu círculo em centímetros: \n");
    scanf("%f%*c", &raio);
    area = raio * raio * 3.1415;
    
    printf("A área do seu círculo é %.2f centímetros quadrados \n", area);
}
