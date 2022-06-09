//
//  main.c
//  project13
//
//  Created by Angela Alves on 06/04/22.
//

#include <stdio.h>

int main() {
    
    float numero;
    float r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10;
    
    printf("Digite o número que você deseja saber a tabuada:\n");
    scanf("%f%*c", &numero);
    
    r0 = numero * 0;
    r1 = numero * 1;
    r2 = numero * 2;
    r3 = numero * 3;
    r4 = numero * 4;
    r5 = numero * 5;
    r6 = numero * 6;
    r7 = numero * 7;
    r8 = numero * 8;
    r9 = numero * 9;
    r10 = numero * 10;
    
    printf("O número digitado multiplicado por 0 é igual a %.2f \n", r0);
    printf("O número digitado multiplicado por 1 é igual a %.2f \n", r1);
    printf("O número digitado multiplicado por 2 é igual a %.2f \n", r2);
    printf("O número digitado multiplicado por 3 é igual a %.2f \n", r3);
    printf("O número digitado multiplicado por 4 é igual a %.2f \n", r4);
    printf("O número digitado multiplicado por 5 é igual a %.2f \n", r5);
    printf("O número digitado multiplicado por 6 é igual a %.2f \n", r6);
    printf("O número digitado multiplicado por 7 é igual a %.2f \n", r7);
    printf("O número digitado multiplicado por 8 é igual a %.2f \n", r8);
    printf("O número digitado multiplicado por 9 é igual a %.2f \n", r9);
    printf("O número digitado multiplicado por 10 é igual a %.2f \n", r10);
    
    
}
