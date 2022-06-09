//
//  main.c
//  atv1
//
//  Created by Angela Alves on 19/05/22.
//
//Faça um algoritmo que leia a nota de vários alunos de uma turma. Ao final, deve ser escrita a média geral da turma. A leitura das médias somente encerra quando uma nota negativa for digitada.

#include <stdio.h>

int main() {
    float nota, soma = 0, media = 0;
    int i = 0;
    do {
        printf("Digite a nota do aluno %d: \n", i+1);
        scanf("%f%*c", &nota);
        if (nota > 0) {
            soma += nota;
            i++;
            media = (soma)/i;
        }
    } while (nota > 0); {
        printf("A turma tem %d alunos e a média geralé: %.2f\n", i, media);
    }
    
}
