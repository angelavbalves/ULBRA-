//
//  main.c
//  atividade19
//
//  Created by Angela Alves on 01/04/22.
//

#include <stdio.h>

int main() {
    float alturafinal, alturadodegrau, numerodedegraus;
    
    printf("Digite a altura que deseja alcançar em metros: ");
    scanf("%f%*c", &alturafinal);
    printf("Digite a altura dos degraus em metros: ");
    scanf("%f%*c", &alturadodegrau);
    
    numerodedegraus = alturafinal / alturadodegrau;
    printf("Será necessário %.1f degraus \n", numerodedegraus);
}
