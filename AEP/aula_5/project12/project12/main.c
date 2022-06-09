//
//  main.c
//  project12
//
//  Created by Angela Alves on 06/04/22.
//

#include <stdio.h>

int main() {
    float salariominimo, salario, quantidadedesalarios;
    
    salariominimo = 1212.00;
    printf("Digite o valor do seu salário R$");
    scanf("%f%*c", &salario);
    
    quantidadedesalarios = salario/salariominimo;
    printf("Você recebe %.2f salários mínimos. \n", quantidadedesalarios);
}
