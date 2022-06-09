//
//  main.c
//  atv23
//
//  Created by Angela Alves on 04/05/22.
//

#include <stdio.h>

int main() {
    int menuPreco, quantidadeDeProduto;
    float precoUnitario, precoTotal, desconto, precoFinalDaNota;
    
    printf("Saiba o preço total da sua compra, o desconto recebido e o preço total pago\n");
    printf("Digite o código do produto comprado entre 1 e 40: ");
    scanf("%d%*c", &menuPreco);
    printf("Digite a quantidade de produtos comprados: ");
    scanf("%d%*c", &quantidadeDeProduto);
    
    if ((menuPreco >= 1) && (menuPreco <= 10)) {
        precoUnitario = 10;
        precoTotal = precoUnitario * quantidadeDeProduto;
        printf("O preço unitário é R$%.2f e o preço total sem desconto é R$%.2f \n", precoUnitario, precoTotal);
    } else if ((menuPreco >= 11) && (menuPreco <= 20)) {
        precoUnitario = 15;
        precoTotal = precoUnitario * quantidadeDeProduto;
        printf("O preço unitário é R$%.2f e o preço total sem desconto é R$%.2f \n", precoUnitario, precoTotal);
    } else if ((menuPreco >= 21) && (menuPreco <= 30)) {
        precoUnitario = 20;
        precoTotal = precoUnitario * quantidadeDeProduto;
        printf("O preço unitário é R$%.2f e o preço total sem desconto é R$%.2f \n", precoUnitario, precoTotal);
    } else if ((menuPreco >= 31) && (menuPreco <= 40)) {
        precoUnitario = 30;
        precoTotal = precoUnitario * quantidadeDeProduto;
        printf("O preço unitário é R$%.2f e o preço total sem desconto é R$%.2f \n", precoUnitario, precoTotal);
    } else {
        printf("Operação inválida, tente novamente com um código válido\n");
    }
    
    if (precoTotal <= 250) {
        desconto = precoTotal * 5/100;
        precoFinalDaNota = precoTotal - desconto;
        printf("O seu desconto foi de 5%% e isso equivale a R$%.2f; o preço final da sua compra foi R$%.2f\n", desconto, precoFinalDaNota);
    } else if ((precoTotal > 250) && (precoTotal <= 500)) {
        desconto = precoTotal * 10/100;
        precoFinalDaNota = precoTotal - desconto;
        printf("O seu desconto foi de 10%% e isso equivale a R$%.2f; o preço final da sua compra foi R$%.2f\n", desconto, precoFinalDaNota);
    } else {
        desconto = precoTotal * 15/100;
        precoFinalDaNota = precoTotal - desconto;
        printf("O seu desconto foi de 15%% e isso equivale a R$%.2f; o preço final da sua compra foi R$%.2f \n", desconto, precoFinalDaNota);
    }
}
