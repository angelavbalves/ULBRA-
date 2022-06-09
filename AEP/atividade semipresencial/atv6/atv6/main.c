//
//  main.c
//  atv6
//
//  Created by Angela Alves on 19/04/22.
//

#include <stdio.h>
#include <math.h>

int main() {
    double numero1, numero2;
    float potencia, raizquadrada1, raizquadrada2, raizcubica1, raizcubica2;
    int menu;
    
    printf("1 - O primeiro número elevado pelo segundo \n 2 - A raiz quadrada de cada um nos números \n 3 - A raiz cúbica de cada um dos números \n");
    printf("Escolha a opção desejada: \n");
    scanf("%d%*c", &menu);
    
    printf("Digite o primeiro número positivo: ");
    scanf("%lf%*c", &numero1);
    printf("Digite o segundo número positivo: ");
    scanf("%lf%*c", &numero2);
    
    if (menu == 1) {
        potencia = pow(numero1, numero2);
        printf("O primeiro número elevado pelo segundo é igual a %.2f \n", potencia);
    } else if (menu == 2) {
        raizquadrada1 = sqrt(numero1);
        raizquadrada2 = sqrt(numero2);
        printf("A raiz quadrada do primeiro número é %.2f e a do segundo é %.2f \n", raizquadrada1, raizquadrada2);
    } else if (menu == 3) {
        raizcubica1 = pow(numero1, (1.0/3.0));
        raizcubica2 = pow(numero2, (1.0/3.0));
        printf("A raiz cúbica do primeiro número é %.2f e a do segundo é %.2f \n", raizcubica1, raizcubica2);
    } else {
        printf("Entrada inválida \n");
    }
}
