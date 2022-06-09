//
//  main.c
//  atv5
//
//  Created by Angela Alves on 19/04/22.
//

#include <stdio.h>

int main() {
    int menu;
    float numero1, numero2, media, diferenca, produto, divisao;
    
    printf("Digite dois número para realizar alguma das opções a seguir: \n ");
    printf("1 - Média \n 2 - Diferença \n 3 - Produto \n 4 - Divisão \n");
    printf("Digite a operação que deseja: ");
    scanf("%d%*c", &menu);
    printf("Digite um número: ");
    scanf("%f%*c", &numero1);
    printf("Digite outro número, positivo e diferente de 0: ");
    scanf("%f%*c", &numero2);
    
    if (menu == 1) {
        media = (numero1 + numero2)/2;
        printf("A média dos dois número é igual a %.2f \n", media);
    } else if (menu == 2) {
        if (numero1 > numero2) {
            diferenca = numero1 - numero2;
            printf("A diferença do maior pelo menor é igual a %.3f \n", diferenca);
        } else {
            diferenca = numero2 - numero1;
            printf("A diferença do maior pelo menor é igual a %.3f \n", diferenca);
        }
    } else if (menu == 3) {
        produto = numero1 *numero2;
        printf("O produto dos números é igual a %.2f \n", produto);
    } else if (menu == 4) {
        divisao = numero1 / numero2;
        printf("A divisão do primeiro pelo segundo é igual a %.2f \n", divisao);
    } else {
        printf("Entrada inválida \n");
    }
}
