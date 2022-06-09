//
//  main.c
//  atv14
//
//  Created by Angela Alves on 20/04/22.
//

#include <stdio.h>

int main() {
    float salario, novosalario;
    
    printf("Digite seu salário atual: R$");
    scanf("%f%*c", &salario);
    
    if (salario <= 300) {
        novosalario = salario + (salario * 50/100);
        printf("O seu novo salário é R$%.2f \n", novosalario);
    } else if ((salario > 300) && (salario <= 500)) {
        novosalario = salario + (salario * 40/100);
        printf("O seu novo salário é R$%.2f \n", novosalario);
    } else if ((salario > 500) && (salario <= 700)) {
        novosalario = salario + (salario * 30/100);
        printf("O seu novo salário é R$%.2f \n", novosalario);
    } else if ((salario > 700) && (salario <= 800)) {
        novosalario = salario + (salario * 20/100);
        printf("O seu novo salário é R$%.2f \n", novosalario);
    } else if ((salario > 800) && (salario <= 1000)) {
        novosalario = salario + (salario * 10/100);
        printf("O seu novo salário é R$%.2f \n", novosalario);
    } else {
        novosalario = salario + (salario * 55/100);
        printf("O seu novo salário é R$%.2f \n", novosalario);
    }
}
