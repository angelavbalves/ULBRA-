//
//  main.c
//  project16
//
//  Created by Angela Alves on 01/04/22.
//

#include <stdio.h>

int main() {
    float salariominimo, salariobruto, salarioliquido;
    float horastrabalhadas, valordahora, imposto;
    
    printf("Digite o valor do salário mínimo atual: R$");
    scanf("%f%*c", &salariominimo);
    printf("Digite o número de horas trabalhadas: \n");
    scanf("%f%*c", &horastrabalhadas);
    
    valordahora = salariominimo/2;
    salariobruto = valordahora * horastrabalhadas;
    imposto = salariobruto * 3/100;
    salarioliquido = salariobruto - imposto;
    
    printf("O valor da hora trabalhada é igual a R$%.2f \n", valordahora);
    printf("O valor do salário bruto é igual a R$%.2f \n", salariobruto);
    printf("O valor do imposto a ser pago é igual a R$%.2f \n", imposto);
    printf("O salário líquido a receber é igual a R$%.2f \n", salarioliquido);
    
    
    
}
