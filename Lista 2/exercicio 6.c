//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 3 – AULA 5 
6) Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média
ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3.
Mostre o código do aluno, suas três notas, a média calculada e a mensagem "APROVADO"
se a média for maior ou igual a 5 e "REPROVADO" caso contrário */

#include <stdio.h>
 int main (){
     int codigo=0;
     float n1=0, n2=0, n3=0, media;
      printf ("\n Digite o codigo do aluno: ");
      scanf ("%d", &codigo);
      printf ("\n Digite a nota 1 do aluno: ");
      scanf ("%f", &n1);
      printf ("\n Digite a nota 2 do aluno: ");
      scanf ("%f", &n2);
      printf ("\n Digite a nota 3 do aluno: ");
      scanf ("%f", &n3);
      
      if (n1>=n2 && n1>=n3){
          media = ((n1*4)+(n2*3)+(n3*3))/10;
      }
      else if (n2>=n1 && n2>=n3){
          media = ((n2*4)+(n1*3)+(n3*3))/10;
      }
      else if (n3>=n1 && n3>=n2){
          media = ((n3*4)+(n1*3)+(n2*3))/10;
      }

      printf ("\n\n RELATORIO ALUNO ");
      printf ("\n Codigo: %d", codigo);
      printf ("\n\n Nota 1: %.2f", n1);
      printf ("\n Nota 2: %.2f", n2);
      printf ("\n Nota 3: %.2f", n3);
      printf ("\n\n Media: %.2f", media);
      printf ("\n Situacao: ");
      
      if (media>=5){
          printf ("APROVADO");
      }
      else{
           printf ("REPROVADO");
      }


      

      
 }