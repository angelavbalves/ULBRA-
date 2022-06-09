//
//  main.c
//  atv4
//
//  Created by Angela Alves on 25/05/22.
//
//Ler dois valores inteiros e escrever o resultado da divisão do primeiro pelo segundo. Se o segundo valor informado for ZERO, deve ser impressa uma mensagem de VALOR INVÁLIDO e ser lido um novo valor. Ao final do programa deve ser impressa a seguinte mensagem: VOCE DESEJA OUTRO CÁLCULO (S/N).  Se a resposta for S o programa deverá retornar ao começo, caso contrário deverá encerrar a sua execução imprimindo quantos cálculos foram feitos.

#include <stdio.h>

//int main() {
//    int num1, num2, resultado;
//
//    printf("Digite valores inteiros.\n");
//    printf("Digite um número: ");
//    scanf("%d%*c", &num1);
//    printf("Digite outro número: ");
//    scanf("%d%*c", &num2);
//
//    resultado = num1 / num2;
//    if (num2 == 0) {
//        printf("VALOR INVÁLIDO");
//    }
//}
//int main() {
//    int num1, num2, resultado;
//
//    printf("Digite valores inteiros.\n");
//    printf("Digite um número: ");
//    scanf("%d%*c", &num1);
//    printf("Digite outro número: ");
//    scanf("%d%*c", &num2);
//
//    while (num2 != 0) {
//        resultado = num1/num2;
//        printf("A divisão de %d por %d é = %d", num1, num2,resultado);
//    }
//}
int main() {
    float num1, num2, resultado;
    char opcao;
    
    do {
        printf("Digite o primeiro número:\n");
        scanf("%f%*c", &num1);
        do {
            printf("Digite o segundo número:\n");
            scanf("%f%*c", &num2);
            if (num2 == 0) {
                printf("O número digitado é inválido\n");
            }
        } while (num2 == 0);
            resultado = num1/num2;
        printf("A divisão de %.0f por %.0f é %.2f\n", num1, num2, resultado);
        printf("Deseja efetuar novo cálculo: [s/n]\n");
        scanf("%c%*c", &opcao);
    } while ((opcao == 's') || (opcao == 'S'));
}
