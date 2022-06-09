//
//  main.c
//  atv8
//
//  Created by Angela Alves on 14/04/22.
//

#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2, soma, raiz, menu;
    
    printf("MENU \n");
    printf("1 - Somar os dois números \n");
    printf("2 - Raiz quadrada de um número \n");
    scanf("%f%*c", &menu);
    
    if (menu == 1) {
        printf("Digite um número: ");
        scanf("%f%*c", &numero1);
        printf("Digite o segundo número:");
        scanf("%f%*c", &numero2);
        
        soma = numero1 + numero2;
        printf("A soma dos dois números digitados é igual a %.2f \n", soma);
    } else if (menu == 2) {
        printf("Digite um número positivo: ");
        scanf("%f%*c", &numero2);
        
        raiz = sqrtf(numero2);
        printf("A raiz quadrada do número digitado é igual a %.2f \n", raiz);
    } else {
        printf("Operação inválida. \n");
    }
    
}
