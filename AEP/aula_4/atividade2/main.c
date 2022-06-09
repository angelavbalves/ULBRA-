//
//  main.c
//  atividade2
//
//  Created by Angela Alves on 31/03/22.
//

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    printf("Digite a nota 1: \n");
    scanf("%f%*c", &nota1);
    printf("Digite a nota 2: \n");
    scanf("%f%*c", &nota2);
    printf("Digite a nota 3: \n");
    scanf("%f%*c", &nota3);

    media = (nota1 + nota2 + nota3)/3;
    printf ("A média das suas notas é: %.2f \n", media);
}
