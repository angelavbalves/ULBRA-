//
//  main.c
//  atv10
//
//  Created by Angela Alves on 16/04/22.
//

#include <stdio.h>

int main() {
    //    Declarando as variáveis
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;
    
    //    Fazer a coleta dos dados e exibir a primeira data
    printf("Para saber a data cronologicamente maior - ");
    printf("Digite a primeira data \n");
    printf("Digite o dia (dd): ");
    scanf("%d%*c", &dia1);
    printf("Digite o mês (mm): ");
    scanf("%d%*c", &mes1);
    printf("Digite o ano (aaaa): ");
    scanf("%d%*c", &ano1);
    
    printf("A primeira data é %.0d/%.0d/%.0d \n", dia1, mes1, ano1);
    
    //    Fazer a coleta dos dados e exibir a segunda data
    printf("Digite a segunda data \n");
    printf("Digite o dia (dd): ");
    scanf("%d%*c", &dia2);
    printf("Digite o mês (mm): ");
    scanf("%d%*c", &mes2);
    printf("Digite o ano (aaaa): ");
    scanf("%d%*c", &ano2);
    
    printf("A segunda data é %.0d/%.0d/%.0d \n", dia2, mes2, ano2);
    
    //    Testes para determinar qual a maior data
}
