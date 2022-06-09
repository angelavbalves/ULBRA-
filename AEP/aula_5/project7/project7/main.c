//
//  main.c
//  project7
//
//  Created by Angela Alves on 06/04/22.
//

#include <stdio.h>

int main() {
    float pesoatual, pesoeng, pesoemg;
    
    printf("Digite seu peso atual em kg ");
    scanf("%f%*c", &pesoatual);
    
    pesoeng = pesoatual + (pesoatual*15/100);
    pesoemg = pesoatual - (pesoatual*20/100);
    
    printf("Se você engordar 15%%, seu peso será de %.2fkg \n", pesoeng);
    printf("Se você emagrecer 20%%, seu peso será de %.2fkg \n", pesoemg);

}
