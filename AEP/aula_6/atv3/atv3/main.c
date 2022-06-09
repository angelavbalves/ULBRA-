//
//  main.c
//  atv3
//
//  Created by Angela Alves on 14/04/22.
//

#include <stdio.h>

int main() {
    float numero1, numero2;
    printf("Digite um número: ");
    scanf("%f%*c", &numero1);
    printf("Digite outro numero: ");
    scanf("%f%*c", &numero2);
    
    if (numero1 > numero2) {
        printf("O maior número é o primeiro: %.2f \n", numero1);
    } else if (numero1 == numero2 ) {
        printf("Os números são iguais.");
    } else {
        printf("O maior número é o segundo: %.2f \n", numero2);
    }
}
