//
//  main.c
//  atv12
//
//  Created by Angela Alves on 20/04/22.
//

#include <stdio.h>

int main() {
    float salariobruto, imposto, salarioliquido;
    
    printf("Digite o seu salário bruto: R$");
    scanf("%f%*c", &salariobruto);
    
    if (salariobruto <= 350) {
        imposto = salariobruto * 7/100;
        salarioliquido = salariobruto + 100 - imposto;
        printf("O seu salário líquido é R$%.2f \nSua bonificação é de R$100,00 e o imposto é de R$%.2f \n", salarioliquido, imposto);
    } else if ((salariobruto > 350) && (salariobruto <= 600)) {
        imposto = salariobruto * 7/100;
        salarioliquido = salariobruto + 75 - imposto;
        printf("O seu salário líquido é R$%.2f \nSua bonificação é de R$75,00 e o imposto é de R$%.2f \n", salarioliquido, imposto);
    } else if ((salariobruto > 600) && (salariobruto <= 900)) {
        imposto = salariobruto * 7/100;
        salarioliquido = salariobruto + 50 - imposto;
        printf("O seu salário líquido é R$%.2f \nSua bonificação é de R$50,00 e o imposto é de R$%.2f \n", salarioliquido, imposto);
    } else {
        imposto = salariobruto * 7/100;
        salarioliquido = salariobruto + 35 - imposto;
        printf("O seu salário líquido é R$%.2f \nSua bonificação é de R$35,00 e o imposto é de R$%.2f \n", salarioliquido, imposto);
    }
}
