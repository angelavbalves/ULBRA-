//
//  main.c
//  atv16
//
//  Created by Angela Alves on 21/04/22.
//

#include <stdio.h>

int main() {
    float precoatual, desconto, novopreco;
    
    printf("Digite o preço atual do produto: ");
    scanf("%f%*c", &precoatual);
    
    if (precoatual <= 30) {
        printf("O preço atual permanece igual, não há desconto");
    } else if ((precoatual > 30) && (precoatual <= 100)) {
        desconto = precoatual * 10/100;
        novopreco = precoatual - desconto;
        printf("O novo preço é de %.2f, seu desconto foi de %.2f \n", novopreco, desconto);
    } else {
        desconto = precoatual * 15/100;
        novopreco = precoatual - desconto;
        printf("O novo preço é de %.2f, seu desconto foi de %.2f \n", novopreco, desconto);
    }
}
