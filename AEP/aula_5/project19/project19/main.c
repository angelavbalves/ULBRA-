//
//  main.c
//  project19
//
//  Created by Angela Alves on 07/04/22.
//

#include <stdio.h>

int main() {
    float dimensao1, dimensao2, area, potencia;
    
    printf("Digite uma das dimensões do cômodo em metros: \n");
    scanf("%f%*c", &dimensao1);
    printf("Digite a segunda dimensão do seu cômodo em metros: \n");
    scanf("%f%*c", &dimensao2);
    
    area = dimensao2 * dimensao1;
    potencia = area * 18;
    
    printf("A área do cômodo que você deseja iluminar é igual a %.2f metros quadrados \n", area);
    printf("A potência de iluminação necessário é igual a %.2fW \n", potencia);
}
