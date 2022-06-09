//
//  main.c
//  project14
//
//  Created by Angela Alves on 07/04/22.
//

#include <stdio.h>

int main() {
    int anoatual, anodenascimento, anos;
    float meses, semanas, dias;
    
    printf("Digite o ano atual: \n");
    scanf("%d%*c", &anoatual);
    printf("Digite o ano do seu nascimento: \n");
    scanf("%d%*c", &anodenascimento);
    
    anos = anoatual - anodenascimento;
    dias = anos * 365;
    semanas = dias/7;
    meses = anos  * 12;
    
    
    printf("Sua idade em anos é %.0d \n", anos);
    printf("Sua idade em meses é %.2f \n", meses);
    printf("Sua idade em semanas é %.2f \n", semanas);
    printf("Sua idade em dias é %.2f \n", dias);
}
