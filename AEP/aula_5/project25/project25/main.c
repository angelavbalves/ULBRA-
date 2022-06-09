//
//  main.c
//  project25
//
//  Created by Angela Alves on 07/04/22.
//

#include <stdio.h>

int main() {
    float horas, minutos, horasemminutos, somadosminutos, minutosemsegundos;
    
    printf("Digite um horário em horas: \n");
    scanf("%f%*c", &horas);
    printf("Digite os minutos desse horário: \n");
    scanf("%f%*c", &minutos);
    
    horasemminutos = horas * 60;
    somadosminutos = horasemminutos + minutos;
    minutosemsegundos = somadosminutos * 60;
    
    printf("A parte em horas digitada é equivalente a %.2f minutos \n", horasemminutos);
    printf("A soma dos minutos é igual a %.2f \n", somadosminutos);
    printf("O total de todos os minutos em segundos é igual a %.2f \n", minutosemsegundos);
}
