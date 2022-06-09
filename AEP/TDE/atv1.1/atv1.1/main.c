//
//  main.c
//  atv1.1
//
//  Created by Angela Alves on 11/05/22.
//

#include <stdio.h>

int main() {
    int soma, numero;
    soma = 0;
    int i = 0;
    while (i<10) {
        printf("Digite um número: ");
        scanf("%d%*c", &numero);
        soma = numero + soma;
        i++;
    }
    printf("A soma é = %d\n", soma);
}
