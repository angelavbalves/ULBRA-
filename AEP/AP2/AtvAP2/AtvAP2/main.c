//
//  main.c
//  AtvAP2
//
//  Created by Angela Alves on 05/05/22.
//

#include <stdio.h>

int main() {
    int idade, anosParaVotar;
    
    printf("Digite sua idade: ");
    scanf("%d%*c", &idade);
    
    if ((idade >= 18) && (idade <= 70)) {
        printf("O voto é obrigatório para você!\n");
    } else if ((idade >= 16) && (idade < 18)) {
        printf("O voto é facultativo para você!\n");
    } else if (idade < 16) {
        anosParaVotar = 16 - idade;
        printf("Você ainda não pode votar! Falta(m) %.0d ano(s) para você poder votar.\n", anosParaVotar);
    } else {
        printf("O voto é facultativo para você!\n");
    }
    printf("Se você for analfabeto, o voto é facultativo.\n");
    
}
