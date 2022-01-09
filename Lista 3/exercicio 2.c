//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 4 - Algoritmos de seleção
2) Escreva um algoritmo para ler o número de gols marcados pelo Grêmio e o número de gols marcados
pelo Inter em um GRENAL. Escrever o nome do vencedor. Caso não haja vencedor deverá ser impresso a
palavra EMPATE. */

#include <stdio.h>
 int main (){
     int inter=0, gremio=0;
     
      printf ("\n ----- GRENAL ----- ");
      printf ("\n\n Digite o numeros de gols marcado por cada equipe ");
      printf ("\n Internacional: ");
      scanf ("%d", &inter);
      printf ("\n Gremio: ");
      scanf ("%d", &gremio);
      
      printf ("\n\n\n PLACAR: INTERNACIONAL %d  X  %d  GREMIO",inter, gremio);
      if (inter>gremio){
          printf ("\n Vencedor: Internacional ");
      }
      else if (gremio>inter){
          printf ("\n Vencedor: Gremio ");
      }
      else {
          printf ("\n O jogo terminou empatado ");
      }
 }