//
//  main.c
//  atv6
//
//  Created by Angela Alves on 25/05/22.
//
//Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234.
//OBS: Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser impressa e repetida a solicitação de uma nova senha até que ela seja válida. Caso contrário deve ser impressa a mensagem "ACESSO PERMITIDO" junto com um número que representa quantas vezes a senha foi informada.



#include <stdio.h>
//
//int main() {
//    int i, senha, senhaCorreta = 1234;
//
//    printf("Digite a sua senha:\n ");
//    scanf("%d%*c", &senha);
//    if (senha == senhaCorreta) {
//        printf("Acesso permitido!\n");
//    } else {
//        printf("Acesso negado!\n");
//    }
//
//}

int main() {
    int i = 1;
    int senha;
    int senhaCorreta = 1234;
    
    printf("Digite a sua senha:\n ");
    scanf("%d%*c", &senha);
    
    while (senha != senhaCorreta) {
        printf("Acesso negado!\nDigite a sua senha novamente:\n");
        scanf("%d%*c", &senha);
        i++;
    }
    printf("Acesso permitido! Você errou a senha %d vezes.\n", i-1);
}
