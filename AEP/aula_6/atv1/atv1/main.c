//
//  main.c
//  atv1
//
//  Created by Angela Alves on 13/04/22.
//

#include <stdio.h>

int main() {
    float trabalho, avaliacao, examefinal, mediaponderada;
    printf("Digite a sua nota no seu trabalho de laboratório: ");
    scanf("%f%*c", &trabalho);
    printf("Digite a sua nota na avaliação semestral: ");
    scanf("%f%*c", &avaliacao);
    printf("Digite sua nota no exame final: ");
    scanf("%f%*c", &examefinal);
    
    mediaponderada = ((trabalho*2) + (avaliacao*3) + (examefinal*5))/10;
    
    if ((mediaponderada >= 8) && (mediaponderada <= 10)) {
        printf("Você está aprovado. Sua média é %.2f. Seu conceito é A. \n", mediaponderada);
    } else if ((mediaponderada >= 7) && (mediaponderada < 8)) {
        printf("Você está aprovado. Sua média é %.2f. Seu conceito é B. \n", mediaponderada);
    } else if ((mediaponderada >= 6) && (mediaponderada < 7)) {
        printf("Você está em recuperação. Sua média é %.2f. Seu conceito é C. \n", mediaponderada);
    } else if ((mediaponderada>=5) && (mediaponderada <6)) {
        printf("Você está em recuperação. Sua média é %.2f. Seu conceito é D. \n", mediaponderada);
    } else {
        printf("Você está reprovado. Sua média é %.2f. Seu conceito é E. \n", mediaponderada);
    }

}
