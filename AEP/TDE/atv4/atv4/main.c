//
//  main.c
//  atv4
//
//  Created by Angela Alves on 13/05/22.
//

#include <stdio.h>

//Efetue um programa que leia a nota de 10 alunos de uma turma. Ao final, deve ser escrita a média geral da turma. Esse algoritmo deve ser feito duas vezes uma usando o FOR, e DO-WHILE

//int main() {
//    float media = 0, soma = 0, nota;
//
//    for (int i=0; i<10; i++) {
//        printf("Digite a nota do aluno %d: ",i+1);
//        scanf("%f%*c", &nota);
//        soma += nota;
//    }
//    media = soma/10;
//    printf("A média da turma é %.2f\n", media);
//}

int main() {
    float media = 0, soma = 0, nota;
    int numAlunos = 0;
    
    do {
        printf("Digite a nota de cada aluno %d: \n", numAlunos+1);
        scanf("%f%*c", &nota);
        soma += nota;
        numAlunos ++;
    } while (numAlunos < 10); {
        media= soma/10;
        printf("A média é %.2f \n", media);
    }
}
