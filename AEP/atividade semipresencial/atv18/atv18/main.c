//
//  main.c
//  atv18
//
//  Created by Angela Alves on 22/04/22.
//

#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d%*c", &idade);
    
    if (idade >= 18) {
        printf("Você atingiu a maioridade. Sua idade é %.0d anos.\n", idade);
    } else {
        printf("Você não atingiu a maioridade. Sua idade é %.0d anos. \n", idade);
    }
}
