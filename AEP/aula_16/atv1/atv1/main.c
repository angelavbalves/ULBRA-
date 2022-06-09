//
//  main.c
//  atv1
//
//  Created by Angela Alves on 26/05/22.
//

#include <stdio.h>

int main() {
    int A[6] = {1, 0, 5, -2, -5, -7};
    int soma = A[0] + A[1] + A[5];
    
    printf("SOMA = %d\n", soma);
    A[4] = 100;
    
    for (int i = 0; i < 6; i++) {
        printf("Valor %d na posição %d\n", A[i], i);
    }
    
}
