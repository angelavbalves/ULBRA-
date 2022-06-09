//
//  main.c
//  atv15
//
//  Created by Angela Alves on 21/04/22.
//

#include <stdio.h>

int main() {
    int investimento;
    float valor, valorcorrigido;
    
    printf("Digite qual o tipo do seu investimento: ");
    scanf("%d%*c", &investimento);
    printf("Digite o valor do seu investimento: ");
    scanf("%f%*c", &valor);
    
    switch (investimento) {
        case 1:
            valorcorrigido = valor + (valor * 3/100);
            printf("O valor corrigido do seu investimento é R$%.2f \n", valorcorrigido);
            break;
        case 2:
            valorcorrigido = valor + (valor * 4/100);
            printf("O valor corrigido do seu investimento é R$%.2f \n", valorcorrigido);
        default:
            printf("Entrada inválida");
            break;
    }
    printf("FIM");
}
