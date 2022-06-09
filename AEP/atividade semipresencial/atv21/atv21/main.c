//
//  main.c
//  atv21
//
//  Created by Angela Alves on 04/05/22.
//

#include <stdio.h>

int main() {
    float preco;
    int menuProcedencia;
    
    printf("Saiba a procedência do seu produto \n");
    printf("Escolha uma das opções do menu de 1 a 30: \n");
    scanf("%d%*c", &menuProcedencia);
    printf("Digite o preço do seu produto: R$");
    scanf("%f%*c", &preco);
    
    if (menuProcedencia == 1) {
        printf("O preço do seu produto é R$%.2f e a procedência dele é o Sul \n", preco);
    } else if (menuProcedencia == 2) {
        printf("O preço do seu produto é R$%.2f e a procedência do seu produto é o Norte \n", preco);
    } else if (menuProcedencia == 3) {
        printf("O preço do seu produto é R$%.2f e a procedência do seu produto é o Leste \n", preco);
    } else if (menuProcedencia == 4) {
        printf("O preço do seu produto é R$%.2f e a procedência do seu produto é o Oeste\n", preco);
    } else if ((menuProcedencia == 5) || (menuProcedencia == 6)) {
        printf("O preço do seu produto é R$%.2f e a procedência do seu produto é o Nordeste\n", preco);
    } else if ((menuProcedencia >= 7) && (menuProcedencia <= 9)) {
        printf("O preço do seu produto é R$%.2f e a procedência do seu produto é o Sudeste\n", preco);
    } else if ((menuProcedencia >= 10) && (menuProcedencia <= 20)) {
        printf("O preço do seu produto é R$%.2f e a procedência do seu produto é o Centro-Oeste\n", preco);
    } else if ((menuProcedencia >= 21) && (menuProcedencia <= 30)) {
        printf("O preço do seu produto é R$%.2f e a procedência do seu produto é o Nordeste\n", preco);
    } else {
        printf("Operação inválida, tente novamente com um valor entre 1 e 30\n");
    }
}
    
