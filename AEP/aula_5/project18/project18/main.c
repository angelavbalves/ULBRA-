//
//  main.c
//  project18
//
//  Created by Angela Alves on 07/04/22.
//

#include <stdio.h>
#include <math.h>

int main() {
    float celsius, fahrenheit;
    
    printf("Digite a temperatura em Celsius: \n");
    scanf("%f%*c", &celsius);
    
    fahrenheit = celsius * 9/5 + 32;
    printf("A temperatura em fahrenheit é %.2f \n", fahrenheit);
    
}
