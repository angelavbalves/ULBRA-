//
//  main.c
//  project22
//
//  Created by Angela Alves on 07/04/22.
//

#include <stdio.h>

int main() {
    int numerodelados, numerodediagonais;
    
    printf("Digite o número de lados do seu polígono: ");
    scanf("%d%*c", &numerodelados);
    
    numerodediagonais = numerodelados * (numerodelados - 3)/2;
    printf("Seu polígono tem %.0d diagonais \n", numerodediagonais);
    
}
