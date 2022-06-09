//
//  main.c
//  atv8
//
//  Created by Angela Alves on 19/04/22.
//

#include <stdio.h>

int main() {
    float salario, novosalario;
    
    printf("Digite seu salário: R$");
    scanf("%f%*c", &salario);
    
    if (salario <= 300) {
        novosalario = salario + (salario * 35/100);
        printf("Seu novo salário é igual a %.2f \n", novosalario);
    } else if (salario > 300) {
        novosalario = salario + (salario * 15/100);
        printf("Seu novo salário é igual a %.2f \n", novosalario);
    }
}
