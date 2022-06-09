//
//  main.c
//  atv11
//
//  Created by Angela Alves on 20/04/22.
//

#include <stdio.h>

int main() {
    float salarioatual, aumento, novosalario;
    
    printf("Digite seu salário atual: R$");
    scanf("%f%*c", &salarioatual);
    
    if (salarioatual <= 300) {
        aumento = salarioatual * 15/100;
        novosalario = salarioatual + aumento;
        printf("Seu aumento foi de R$%.2f \n Seu novo salário é R$%.2f \n", aumento, novosalario);
    } else if ((salarioatual > 300) && (salarioatual <= 600)) {
        aumento = salarioatual * 10/100;
        novosalario = salarioatual + aumento;
        printf("Seu aumento foi de R$%.2f \n Seu novo salário é R$%.2f \n", aumento, novosalario);
    } else if ((salarioatual > 600) && (salarioatual <= 900)) {
        aumento = salarioatual * 5/100;
        novosalario = salarioatual + aumento;
        printf("Seu aumento foi de R$%.2f \n Seu novo salário é R$%.2f \n", aumento, novosalario);
    } else {
        printf("Seu salário é R$%.2f \n Você não receberá aumento \n", salarioatual);
    }
}
