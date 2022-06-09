//
//  main.c
//  atv7
//
//  Created by Angela Alves on 19/04/22.
//

#include <stdio.h>

int main() {
    float salario, novosalario;
    
    printf("Digite o seu salário: R$");
    scanf("%f%*c", &salario);
    
    if (salario < 500) {
        novosalario = salario + (salario * 30/100);
        
        printf("Seu novo salário é de %.2f \n", novosalario);
    } else {
        printf("Você não tem direito ao aumento \n");
    }
}
