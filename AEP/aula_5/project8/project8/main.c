//
//  main.c
//  project8
//
//  Created by Angela Alves on 06/04/22.
//

#include <stdio.h>

int main() {
    float pesoemkg, pesoemg;
    
    printf("Digite seu peso em kg: ");
    scanf("%f%*c", &pesoemkg);
    
    pesoemg = pesoemkg * 1000;
    printf("Seu peso em gramas é igual a %.2f \n", pesoemg);
}
