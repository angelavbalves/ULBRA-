//
//  main.c
//  atv9
//
//  Created by Angela Alves on 19/04/22.
//

#include <stdio.h>

int main() {
    float saldomedio, credito;
    
    printf("Digite seu saldo médio ao decorrer do ano: R$");
    scanf("%f%*c", &saldomedio);
    
    if (saldomedio > 400) {
        credito = (saldomedio * 30/100);
        printf("Seu saldo médio foi de %.2f \n Você receberá um crédito de R$%.2f\n", saldomedio, credito);
    } else if ((saldomedio <= 400) && (saldomedio > 300)) {
        credito = (saldomedio * 25/100);
        printf("Seu saldo médio foi de %.2f \n Você receberá um crédito de R$%.2f\n", saldomedio, credito);
    } else if ((saldomedio <= 300) && (saldomedio > 200)) {
        credito = (saldomedio * 20/100);
        printf("Seu saldo médio foi de %.2f \n Você receberá um crédito de R$%.2f \n", saldomedio, credito);
    } else if (saldomedio <= 200) {
        credito = (saldomedio * 10/100);
        printf("Seu saldo médio foi de %.2f \nVocê receberá um crédito de R$%.2f \n", saldomedio, credito);
    }
}
