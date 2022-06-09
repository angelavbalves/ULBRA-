//
//  main.c
//  atividade18
//
//  Created by Angela Alves on 01/04/22.
//

#include <stdio.h>

int main() {
    float sacoderacao, porcao, dosediaria, dosefinal, restantederacao;
    
    printf("Digite o peso do saco de ração em gramas: ");
    scanf("%f%*c", &sacoderacao);
    printf("Digite o peso da porção em gramas: ");
    scanf("%f%*c", &porcao);
    
    dosediaria = porcao * 2;
    dosefinal = dosediaria * 5;
    restantederacao = sacoderacao - dosefinal;
    
    printf("Após 5 dias, Pedro terá consumido %.2f gramas de ração \n", dosefinal);
    printf("O peso restante no saco será de %.2f \n", restantederacao);
}
