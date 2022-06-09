//
//  main.c
//  project1-pag50
//
//  Created by Angela Alves on 06/04/22.
//

#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2, resultado;
    
    printf("Digite um número: \n");
    scanf("%f%*c", &numero1);
    printf("Digite um segundo número \n");
    scanf("%f%*c", &numero2);
    
    resultado = numero1 - numero2;
    printf("O resultado da subtração do primeiro pelo segundo é igual a %.0f. \n", resultado);
}
