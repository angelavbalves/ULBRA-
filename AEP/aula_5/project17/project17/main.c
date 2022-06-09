//
//  main.c
//  project17
//
//  Created by Angela Alves on 07/04/22.
//

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    double raio, comprimento, area, volume;
    
    printf("Digite o raio da sua esfere em cm: \n");
    scanf("%lf%*c", &raio);
    
    comprimento = 2 * PI * raio;
    area = pow(raio, 2) * PI;
    volume = (4*PI)/3 * pow(raio, 3);
    
    printf("O comprimento da sua esfera é %.2lf. \n", comprimento);
    printf("A área da sua esfera é %.2lf. \n", area);
    printf("O volume da sua esfera é %.2lf. \n", volume);
    
}
