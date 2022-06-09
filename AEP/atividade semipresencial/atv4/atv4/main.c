//
//  main.c
//  atv4
//
//  Created by Angela Alves on 19/04/22.
//

#include <stdio.h>

int main() {
    float numero1, numero2, numero3;
    
    printf("Compare três números e saiba qual é o maior: \n");
    printf("Digite o primeiro número: ");
    scanf("%f%*c", &numero1);
    printf("Digite o segundo número: ");
    scanf("%f%*c", &numero2);
    printf("Digite o terceiro número: ");
    scanf("%f%*c", &numero3);

    if ((numero1 > numero2) && (numero1 > numero3)) {
        printf("O número (%.2f) é o maior entre os três. \n", numero1);
    } else if ((numero1 >= numero2) && (numero1 < numero3)) {
        printf("O número (%.2f) é o maior entre s três \n", numero3);
    } else {
        printf("O número (%.2f) é o maior entre os três \n", numero3);
    }
}
