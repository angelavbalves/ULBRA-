//
//  main.c
//  project9
//
//  Created by Angela Alves on 06/04/22.
//

#include <stdio.h>

int main() {
    float basemaior, basemenor, altura, area;
    
    printf("Digite a base maior do seu trapézio em cm: \n");
    scanf("%f%*c", &basemaior);
    printf("Digite a base menor do seu trapézio em cm: \n");
    scanf("%f%*c", &basemenor);
    printf("Digite a altura do seu trapézio em cm: \n");
    scanf("%f%*c", &altura);
    
    area = ((basemaior+basemenor)*altura)/2;
    printf("A área do seu trapézio é igual a %.2f centímetros quadrados. \n", area);
}
