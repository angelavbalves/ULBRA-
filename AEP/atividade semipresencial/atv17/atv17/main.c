//
//  main.c
//  atv17
//
//  Created by Angela Alves on 22/04/22.
//

#include <stdio.h>

int main() {
    int senhafornecida;
    
    printf("Digite sua senha de quatro dígitos: ");
    scanf("%d%*c", &senhafornecida);
    
    
    switch (senhafornecida) {
        case 4531:
            printf("Você tem permissão para acessar sua conta! \n");
            break;
            
        default:
            printf("Permissão negada! \n");
            break;
    }
}
