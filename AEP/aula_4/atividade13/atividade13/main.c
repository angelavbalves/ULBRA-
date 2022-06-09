//
//  main.c
//  atividade13
//
//  Created by Angela Alves on 31/03/22.
//

#include <stdio.h>

int main() {
    float pes, polegadas, jardas, milhas;
    
    printf("Digite uma medida em pés: \n");
    scanf("%f%*c", &pes);
    
    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = pes / 1760;
    
    printf("Sua medida em polegadas é igual a %.2f \n", polegadas);
    printf("Sua medida em jardas é igual a %.2f \n", jardas);
    printf("Sua medida em milhas é igual a %.2f \n", milhas);
}
