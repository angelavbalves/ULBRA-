//
//  main.c
//  atv3
//
//  Created by Angela Alves on 19/04/22.
//

#include <stdio.h>

int main() {
    float numero1, numero2;
    
    printf("Compare dois números e saiba qual o menor. \n");
    printf("Digite um número: ");
    scanf("%f%*c", &numero1);
    printf("Digite outro número: ");
    scanf("%f%*c", &numero2);
    
    if (numero1 > numero2) {
        printf("O segundo número (%.2f) é menor. \n", numero2);
    } else {
        printf("O primeiro número (%.2f) é menor. \n", numero1);
    }
}
