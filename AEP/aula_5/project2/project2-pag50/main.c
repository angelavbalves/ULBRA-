//
//  main.c
//  project2-pag50
//
//  Created by Angela Alves on 06/04/22.
//

#include <stdio.h>
#include <math.h>

int main() {
    float n1, n2, n3, resultado;
    
    printf("Digite um número: \n");
    scanf("%f%*c", &n1);
    printf("Digite um segundo número: \n");
    scanf("%f%*c", &n2);
    printf("Digite um terceiro número: \n");
    scanf("%f%*c", &n3);
    
    resultado = n1 * n2 * n3;
    printf("A multiplicação dos três números digitados é igual a %.2f. \n", resultado);
}
