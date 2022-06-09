//
//  main.c
//  project3
//
//  Created by Angela Alves on 06/04/22.
//

#include <stdio.h>

int main() {
    float n1, n2, resultado;
    
    printf("Digite um número: \n");
    scanf("%f%*c", &n1);
    printf("Digite um segundo número, que seja diferente de 0: \n");
    scanf("%f%*c", &n2);
    
    resultado = n1/n2;
    printf("A divisão do primeiro número pelo segundo é igual a %.2f. \n", resultado);
}
