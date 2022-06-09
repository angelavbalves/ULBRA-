//
//  main.c
//  project15
//
//  Created by Angela Alves on 01/04/22.
//

#include <stdio.h>

int main() {
    float precodefabrica, lucro, imposto, precofinal;
    
    printf("Digite o preço de fábrica do seu carro R$");
    scanf("%f%*c", &precodefabrica);
    printf("Digite sua porcentagem de lucro: ");
    scanf("%f%*c", &lucro);
    printf("Digite a porcentagem de imposto a ser paga: ");
    scanf("%f%*c", &imposto);
        
    lucro = precodefabrica * lucro/100;
    imposto = precodefabrica * imposto/100;
    precofinal = precodefabrica + lucro - imposto;
    printf("O preço final do seu carro é igual a R$%.2f \n", precofinal);
}
