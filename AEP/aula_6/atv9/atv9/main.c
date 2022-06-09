//
//  main.c
//  atv9
//
//  Created by Angela Alves on 15/04/22.
//

#include <stdio.h>

int main() {
    int dia, mes, ano, hora, minutos;
    
    printf("Digite o dia: ");
    scanf("%d%*c", &dia);
    printf("Digite o mês: ");
    scanf("%d%*c", &mes);
    printf("Digite o ano: ");
    scanf("%d%*c", &ano);
    
    printf("%.0d/%.0d/%.0d \n", dia, mes, ano);
    
    if (mes == 1) {
        if ((dia < 1) || (dia > 31)) {
            printf("Data inválida; Esse dia não existe. Tente novamente \n");
        } else {
            printf("Janeiro \n");
        }
    } else if (mes == 2) {
        if ((dia < 1) || (dia > 28)) {
            printf("Data inválida; Esse dia não existe. Tente novamente \n");
        } else {
            printf("Fevereiro \n");
        }
    } else if (mes == 3) {
        if ((dia < 1) || (dia > 31)) {
            printf("Data inválida; Esse dia não existe. Tente novamente \n");
        } else {
            printf("Março \n");
        }
    } else if (mes == 4) {
        if ((dia < 1) || (dia > 30)) {
            printf("Data inválida; Esse dia não existe. Tente novamente \n");
        } else {
            printf("Abril \n");
        }
    } else if (mes == 5) {
        if ((dia < 1) || (dia > 31)) {
            printf("Data inválida; Esse dia não existe. Tente novamente \n");
        } else {
            printf("Maio \n");
        }
    } else if (mes == 6) {
        if ((dia < 1) || (dia > 30)) {
            printf("Data inválida; Esse dia não existe. Tente novamente \n");
        } else {
            printf("Junho \n");
        }
    } else if (mes == 7) {
        if ((dia < 1) || (dia > 31)) {
            printf("Data inválida; Esse dia não existe. Tente novamente \n");
        } else {
            printf("Julho \n");
        }
    } else if (mes == 8) {
        if ((dia < 1) || (dia > 31)) {
            printf("Data inválida; Esse dia não existe. Tente novamente \n");
        } else {
            printf("Agosto \n");
        }
    } else if (mes == 9) {
        if ((dia < 1) || (dia > 30)) {
            printf("Data inválida; Esse dia não existe. Tente novamente \n");
        } else {
            printf("Setembro \n");
        }
    } else if (mes == 10) {
        if ((dia < 1) || (dia > 31)) {
            printf("Data inválida; Esse dia não existe. Tente novamente \n");
        } else {
            printf("Outubro \n");
        }
    } else if (mes == 11) {
        if ((dia < 1) || (dia > 30)) {
            printf("Data inválida; Esse dia não existe. Tente novamente \n");
        } else {
            printf("Novembro \n");
        }
    } else if (mes == 12) {
        if ((dia < 1) || (dia > 31)) {
            printf("Data inválida; Esse dia não existe. Tente novamente \n");
        } else {
            printf("Dezembro \n");
        }
    } else {
        printf("Data inválida; Esse mês não existe. Tente novamente \n");
    }
    
    printf("Digite a hora desejada (24h): ");
    scanf("%d%*c", &hora);
    printf("Digite os minutos: ");
    scanf("%d%*c", &minutos);
    
    printf("Hora atual - %.0d:%.0d \n", hora, minutos);
}
