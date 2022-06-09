//
//  main.c
//  atv9
//
//  Created by Angela Alves on 17/05/22.
//

#include <stdio.h>

int main() {
    int resultado, numero;
    printf("TABUADA\n");
    printf("Digite o número que você deseja saber a tabuada: \n");
    scanf("%d%*c", &numero);
    
    for (int i=1; i<=10; i++) {
        resultado = numero * i;
        printf("%d * %d = %d\n", numero, i, resultado);
    }
    
}
