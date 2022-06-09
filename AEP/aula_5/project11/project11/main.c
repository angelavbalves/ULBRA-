//
//  main.c
//  project11
//
//  Created by Angela Alves on 06/04/22.
//

#include <stdio.h>

int main() {
    float diagonalmaior, diagonalmenor, area;
    
    printf("Digite o comprimento da diagonal menor do seu losango em cm: ");
    scanf("%f%*c", &diagonalmenor);
    printf("Digite o comprimento da diagonal maior do seu losango em cm: ");
    scanf("%f%*c", &diagonalmaior);
    
    area = (diagonalmaior*diagonalmenor)/2;
    printf("A área do seu losango é igual a %.2f centímetros quadrados \n", area);
    
}
