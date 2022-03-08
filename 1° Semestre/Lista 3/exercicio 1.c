//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 4 - Algoritmos de seleção
1) Escreva um algoritmo para ler as notas da 1a e 2a avaliações de um aluno, calcular a média e escrever
se este aluno foi APROVADO, REPROVADO ou se está em EXAME. Escrever também a média
calculada. OBS: Para ter direito ao exame o aluno deve obter média mínima 3.0.*/

#include <stdio.h>
 int main (){
     float nota1=0, nota2=0, media=0;
     
      printf ("\n Digite a nota da primeira avaliacao: ");
      scanf ("%f", &nota1);
      printf ("\n Digite a nota da segunda avaliacao: ");
      scanf ("%f", &nota2);

      media = (nota1+nota2)/2;
      
      printf ("\n\n\n NOTA FINAL: %.1f ",media);
      if (media>=7){
          printf ("\n O aluno esta aprovado ");
      }
      else if (media<=6 && media>=3){
          printf ("\n O aluno esta em exame ");
      }
      else if (media<3){
          printf ("\n O aluno esta reprovado ");
      }
 }