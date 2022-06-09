//
//  main.c
//  atv10
//
//  Created by Angela Alves on 19/04/22.
//

#include <stdio.h>

int main() {
    float custo, distribuidor, imposto, valorfinal;
    
    printf("Digite o custo de fábrica do carro: R$");
    scanf("%f%*c", &custo);
    
    if (custo <= 12000) {
        distribuidor = (custo*5/100);
        valorfinal = (custo + distribuidor);
        printf("O valor final do carro será de R$%.2f \n", valorfinal);
    } else if ((custo > 12000) && (custo < 25000)) {
        distribuidor = (custo*10/100);
        imposto = (custo*15/100);
        valorfinal = custo + imposto + distribuidor;
        printf("O valor final do carro será de R$%.2f \n", valorfinal);
    } else {
        distribuidor = (custo*15/100);
        imposto = (custo*20/100);
        valorfinal = custo + imposto + distribuidor;
        printf("O valor final do carro será de R$%.2f \n", valorfinal);
    }
}
