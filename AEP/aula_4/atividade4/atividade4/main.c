//
//  main.c
//  atividade4
//
//  Created by Angela Alves on 31/03/22.
//

#include <stdio.h>

int main() {
    float salario, novosalario, aumento;
    
    printf("Digite seu salário atual R$");
    scanf("%f%*c", &salario);
    
    aumento = 0.25 * salario;
    novosalario = salario + aumento;
    printf("Seu novo salário é R$%.2f \n", novosalario);
}
