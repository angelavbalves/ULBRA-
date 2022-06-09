//
//  main.c
//  atv20
//
//  Created by Angela Alves on 22/04/22.
//

#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite a idade do nadador: ");
    scanf("%d%*c", &idade);
    
    if (idade < 5) {
        printf("O nadador é novo demais\n");
    } else if ((idade >= 5) && (idade <= 7)) {
        printf("O nadador é da categoria infantil\n");
    } else if ((idade >= 8) && (idade <= 10)) {
        printf("O nadador é da categoria juvenil\n");
    } else if ((idade >= 11) && (idade <= 15)) {
        printf("O nadador é adolescente\n");
    } else if ((idade >= 16) && (idade <= 30)) {
        printf("O nadador já é adulto\n");
    } else {
        printf("O nadador já é da categoria sênior\n");
    }
}
