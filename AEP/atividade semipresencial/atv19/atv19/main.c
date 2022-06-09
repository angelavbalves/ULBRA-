//
//  main.c
//  atv19
//
//  Created by Angela Alves on 22/04/22.
//

#include <stdio.h>

int main() {
    double pesoideal, altura;
    int opcao;
    
    printf("Escolha uma das opções: \n1-Mulher \n2-Homem \n");
    scanf("%d%*c", &opcao);
    printf("Digite sua altura em metros: ");
    scanf("%lf%*c", &altura);
    
    if (opcao == 1) {
        printf("Sua altura é %.3lf\n", altura);
        pesoideal = (62.1 * altura) - 44.7;
        printf("VOcê é mulher. Seu peso ideal é %.2lf \n", pesoideal);
    } else if (opcao == 2) {
        pesoideal = (72.7 * altura) - 58;
        printf("Você é homem. Seu peso ideal é %.2lf \n", pesoideal);
    } else {
        printf("Opção inválida");
    }
}
