//
//  main.c
//  atv1.2
//
//  Created by Angela Alves on 11/05/22.
//

#include <stdio.h>

int main() {
    int numero, soma;
    soma = 0;
    int i = 0;
    do {
        printf("Digite um número: ");
        scanf("%d%*c", &numero);
        soma = soma + numero;
        i++;
    } while (i<10); {
        printf("A soma é = %d\n", soma);
    }
}
