//
//  main.c
//  atv8
//
//  Created by Angela Alves on 17/05/22.
//

#include <stdio.h>

int main() {
    int resultado;
    printf("TABUADA DO 9\n");
    for (int i=1; i<=10; i++) {
        resultado = 9 * i;
        printf("9 * %d = %d \n", i, resultado);
    }
}
