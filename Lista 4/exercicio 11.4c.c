//NOME: Yasmin Souza Camargo

/*Lista de Exercícios extra - 11 – Algoritmos com repetição V
11.4 Ler o número de alunos existentes em uma turma, ler as notas destes alunos, e calcular a média
aritmética destas notas.
*/

#include <stdio.h>
 int main (){
     int alunos=0, cont=0;
     float media=0, total=0, medias=0;
     printf ("\n Digite o numero de alunos da turma: ");
     scanf("%d",&alunos);
     cont=1;
     while (cont<=alunos){
         printf ("\n Digite a nota do aluno %d: ",cont);
         scanf("%f",&media);
         cont++;
         medias = medias + media;
     }
     total = medias/alunos;
     printf ("\n Media dos %d alunos: %.2f", alunos, total);  
 }