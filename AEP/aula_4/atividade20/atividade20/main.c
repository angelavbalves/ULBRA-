//
//  main.c
//  atividade20
//
//  Created by Angela Alves on 01/04/22.
//

#include <stdio.h>
#include <math.h>

int main() {
    double angulo, escada, altura, rad;
    
    printf("Digite a altura na parede em centímetros: ");
    scanf("%lf%*c", &altura);
    printf("Digite o ângulo entre a escada e o chão: ");
    scanf("%lf%*c", &angulo);
    
    rad =  angulo * 3.14/180;
    escada = altura / sin(rad);
    printf("O comprimento da escada é de %.1lf centímetros \n", escada);
}
