//
//  main.c
//  atv10
//
//  Created by Angela Alves on 31/05/22.
//

#include <stdio.h>

int main() {
    float notas[15], media = 0, soma = 0;
    int i;
    
    for (i = 0; i < 15; i++) {
        printf("Digite a nota do aluno:\n");
        scanf("%f%*c", &notas[i]);
        if(notas[i] > 10) {
            printf("Tente novamente\n");
        } else {
            soma += notas[i];
        }
    }
    media = soma/15;
    printf("Media = %.2f\n", media);
}
