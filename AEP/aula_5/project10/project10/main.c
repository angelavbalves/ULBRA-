//
//  main.c
//  project10
//
//  Created by Angela Alves on 06/04/22.
//

#include <stdio.h>

int main() {
    float lado, area;
    
    printf("Digite comprimento do lado do seu quadrado em centímetros: \n");
    scanf("%f%*c", &lado);
    
    area = lado * lado;
    printf("A área do seu quadrado é igual a %.2f centímetros quadrados. \n", area);
    
}

