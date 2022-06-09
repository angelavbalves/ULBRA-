//
//  main.c
//  atv11
//
//  Created by Angela Alves on 17/05/22.
//
//Faça um programa que leia a matrícula, o nome e as três notas de 10 alunos, e indique para cada aluno, se ele foi aprovado ou não.


#include <stdio.h>

int main() {
    int matricula = 0, media = 0, totalNotas = 0;
    char nome[10];
    float nota;

    for (int i=1; i<=10; i++) {
        printf("Digite o nome do aluno: ");
        scanf("%s%*c", &nome[0]);

        printf("Digite o número de matrícula do aluno: ");
        scanf("%d%*c", &matricula);
            for (int j=1; j<=3; j++) {
                printf("Digite a nota de cada prova N%d:\n",j);
                scanf("%f%*c", &nota);
                totalNotas += nota;
            }
        media = totalNotas / 3;
        if ((media >= 7) && (media <= 10)) {
            printf("%s, com número de matrícula (%d) foi aprovado com média %d\n", nome, matricula, media);
        } else if ( media < 7){
            printf("%s, com número de matrícula (%d) foi reprovado com média %d\n", nome, matricula, media);
        } else {
            printf("Média inválida");
        }

    }

}

