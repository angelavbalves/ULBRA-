//
//  main.c
//  project24
//
//  Created by Angela Alves on 07/04/22.
//

#include <stdio.h>
#define DOLAR 1.80
#define MARCO 2.00
#define LIBRA 3.57

int main() {
    float real, dolar, marco, libra;
    
    printf("Digite quanto você tem de dinheiro em R$");
    scanf("%f%*c", &real);
    
    dolar = real/DOLAR;
    marco = real/MARCO;
    libra = real/LIBRA;
    
    printf("Seu valor em dólares é igual a %.2f \n", dolar);
    printf("Seu valor em marco alemão é igual a %.2f \n", marco);
    printf("Seu valor em libra esterlina é igual a %.2f \n", libra);
}
