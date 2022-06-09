//
//  main.c
//  atividade5
//
//  Created by Angela Alves on 31/03/22.
//

#include <stdio.h>

int main() {
    float salario, percentual, aumento, novosalario;
    
    printf("Digite o seu salário atual R$");
    scanf("%f%*c", &salario);
    printf("Digite seu percentual de aumento: ");
    scanf("%f%*c", &percentual);
    
    aumento = percentual/100 * salario;
    novosalario = salario + aumento;
    
    printf("Seu aumento é de R$%.2f \n", aumento);
    printf("Seu novo salário é de R$%.2f \n", novosalario);
}
