//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 1 – AULA 3
5)Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final
deste aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5.
Fórmula para o cálculo da média final é:
*/

#include <stdio.h>
 int main (){
    
     float n1=0, n2=0, n3=0;
     float media=0;
      
      printf ("\n Digite a nota 1 do aluno: ");
      scanf ("%f", &n1);
      printf ("\n Digite a nota 2 do aluno: ");
      scanf ("%f", &n2);
      printf ("\n Digite a nota 3 do aluno: ");
      scanf ("%f", &n3);
     
      media = ((n1*2)+(n2*3)+(n3)*5)/10;

      printf ("\n \n Media final do aluno: %.2f ", media);
 }