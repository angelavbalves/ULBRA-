//
//  main.c
//  atividade11
//
//  Created by Angela Alves on 31/03/22.
//

#include <stdio.h>
#include <math.h>

int main() {
    double numero;
    
    printf("Digite um número inteiro e positivo, diferente de zero: \n");
    scanf("%lf%*c", &numero);
    
    printf("%.2lf ao quadrado é igual a %.2lf \n", numero, pow(numero, 2));
    printf("%.2lf ao cubo é igual a %.2lf \n", numero, pow(numero, 3));
    printf("A raiz quadrada de %.2lf é igual a %.2lf \n", numero, sqrt(numero));
    printf("A raiz cúbica de %.2lf é igual a %.2lf \n", numero, pow(numero, 1.0/3.0));
}
