//
//  main.c
//  atv13
//
//  Created by Angela Alves on 20/04/22.
//

#include <stdio.h>

int main() {
    float preco, novopreco, aumento;
    
    printf("Digite o preço do produto R$");
    scanf("%f%*c", &preco);
    
    if (preco < 50) {
        aumento = preco * 5/100;
        novopreco = preco + aumento;
        printf("O aumento será de R$%.2f \nO novo preço do produto é R$%.2f \n", aumento, novopreco);
    } else if ((preco >= 50) && (preco < 100)) {
        aumento = preco * 10/100;
        novopreco = preco + aumento;
        printf("O aumento será de R$%.2f \nO novo preço do produto é R$%.2f \n", aumento, novopreco);
    } else {
        aumento = preco * 15/100;
        novopreco = preco + aumento;
        printf("O aumento será de R$%.2f \nO novo preço do produto é R$%.2f \n", aumento, novopreco);
    }
    
    if (novopreco < 80) {
        printf("O novo preço do produto é R$%.2f e está barato. \n", novopreco);
    } else if ((novopreco <= 80) && (novopreco <= 120)) {
        printf("O novo preço do produto é R$%.2f e está normal. \n", novopreco);
    } else if ((novopreco > 120) && (novopreco <= 200)) {
        printf("O novo preço do produto é R$%.2f e está caro. \n", novopreco);
    } else {
        printf("O novo preço do produto é R$%.2f e está muito caro. \n", novopreco);
    }
}
