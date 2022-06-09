//
//  main.c
//  project16
//
//  Created by Angela Alves on 07/04/22.
//

#include <stdio.h>
#include <math.h>

int main() {
    double cateto1, cateto2, hipotenusa;
    
    printf("Digite o comprimento de um dos catetos: \n");
    scanf("%lf%*c", &cateto1);
    printf("Digite o comprimento do outro cateto: \n");
    scanf("%lf%*c", &cateto2);
    
    hipotenusa = sqrt((pow(cateto1, 2) + pow(cateto2, 2)));
    printf("O comprimento da sua hipotenusa é igual a %.2lf \n", hipotenusa);
    
}
