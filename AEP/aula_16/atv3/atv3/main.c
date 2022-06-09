//
//  main.c
//  atv3
//
//  Created by Angela Alves on 26/05/22.
//
//Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.


#include <stdio.h>
#include <math.h>

int main() {
    float numeros[10], quadrado[10];
    int i;
    
    for (i = 0; i < 10; i++) {
        printf("Digite um número:\n");
        scanf("%f%*c", &numeros[i]);
        quadrado[i] = pow(numeros[i], 2);
    }
    
    
    for (i = 0; i < 10; i++) {
        printf("O número na posição %d é = %.2f\n", i, numeros[i]);
    }
    
    for (i = 0; i < 10; i++) {
        printf("%.2f ao quadrado é %.2f\n",numeros[i], quadrado[i]);
    }
    
}
