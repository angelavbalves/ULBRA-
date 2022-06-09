//
//  main.c
//  atividade1
//
//  Created by Angela Alves on 31/03/22.
//

#include <stdio.h>

int main() {
    int n1, n2, n3, n4, soma;
    printf("Digite a nota 1: \n");
    scanf("%d%*c", &n1);
    printf("Digite a nota 2: \n");
    scanf("%d%*c", &n2);
    printf("Digite a nota 3: \n");
    scanf("%d%*c", &n3);
    printf("Digite a nota 4: \n");
    scanf("%d%*c", &n4);
    soma = n1 + n2 + n3 + n4;
    
    printf ("A soma das suas notas é: %.2d \n", soma);
}

