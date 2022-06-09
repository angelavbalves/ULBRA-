//
//  main.c
//  project5
//
//  Created by Angela Alves on 06/04/22.
//

#include <stdio.h>

int main() {
    float preco, precofinal, desconto;
    
    printf("Digite o preço do seu produto R$ \n");
    scanf("%f%*c", &preco);
    
    desconto = preco * 10/100;
    precofinal = preco - desconto;
    
    printf("O preço final do seu produto foi de R$%.2f. ", precofinal);
    printf("Seu desconto foi de R$%.2f \n", desconto);
}
