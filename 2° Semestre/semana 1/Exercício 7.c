//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 1 - Semana 1 
7) A turma C é composta de 60 alunos, e a turma D de 20 alunos. Escreva um programa que
leia o percentual de alunos reprovados na turma C, o percentual de aprovados na turma D,
calcule e escreva: a) O número de alunos reprovados na turma C. b) O número de alunos
reprovados na turma D. c) A percentagem de alunos reprovados em relação ao total de
alunos das duas turmas. */


#include <stdio.h>
int main()
{
    int turmaC=60, turmaD=20;

    float reprovadosC, aprovadosD, reprovados_total;
    printf("Digite o percentual de alunos REPROVADOS da turma C: ");
    scanf("%f", &reprovadosC);
    printf("Digite o percentual de alunos APROVADOS da turma D: ");
    scanf("%f", &aprovadosD);

    reprovados_total = ((reprovadosC/100)*turmaC)+ (turmaD-((aprovadosD/100)*turmaD));
    printf("\nNumero de alunos reprovados na turma C: %.2f", (reprovadosC/100)*turmaC);
    printf("\nNumero de alunos reprovados na turma D: %.2f", turmaD-((aprovadosD/100)*turmaD));
    printf("\nPercentagem de alunos reprovados em relacao ao total de alunos das duas turmas: %.2f%%", (reprovados_total*100)/(turmaC+turmaD));
    return 0;
 
}

