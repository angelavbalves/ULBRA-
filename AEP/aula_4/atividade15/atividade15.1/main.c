//
//  main.c
//  atividade15.1
//
//  Created by Angela Alves on 01/04/22.
//

#include <stdio.h>

int main() {
    float precobruto,precoliquido;
    float taxadelucro, taxadeimposto;
    float lucro, imposto;
    
    printf("Digite o valor de fábrica do seu carro R$");
    scanf("%f%*c", &precobruto);
    printf("Digite o percentual de lucro: ");
    scanf("%f%*c", &taxadelucro);
    printf("Digite o percentual de imposto: ");
    scanf("%f%*c", &taxadeimposto);
    
    lucro = precobruto * taxadelucro/100;
    imposto = precobruto * taxadeimposto/100;
    precoliquido = precobruto + lucro - imposto;
    
    printf("O seu percentual de lucro a receber é igual a R$%.2f \n", lucro);
    printf("A taxa de juros a ser paga é igual a R$%.2f \n", imposto);
    printf("O valor total do seu carro é igual a R$%.2f \n", precoliquido);
    
}
