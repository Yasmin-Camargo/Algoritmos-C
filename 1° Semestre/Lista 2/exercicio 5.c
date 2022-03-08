//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 3 – AULA 5 
5) Elabore um algoritmo que, dada a idade de um nadador classifica-o em uma das seguintes categorias:
    infantil A = 5 - 7 anos	
    infantil B = 8-10 anos	
    juvenil	A =	11-13 anos	
    juvenil	B = 14-17 anos	
    adulto = maiores de 18 anos */

#include <stdio.h>
 int main (){
     int idade=0;
      printf ("\n Digite a sua idade: ");
      scanf ("%d", &idade);

      if (idade>=5 && idade<=7){
          printf ("\n\n Sua Categoria de nadador: ");
          printf ("INFALTIL A ");
      }
      else if (idade>=8 && idade<=10){
          printf ("\n\n Sua Categoria de nadador: ");
          printf ("INFALTIL B ");
      }
      else if (idade>=11 && idade<=13){
          printf ("\n\n Sua Categoria de nadador: ");
          printf ("JUVENIL A ");
      }
      else if (idade>=14 && idade<=17){
          printf ("\n\n Sua Categoria de nadador: ");
          printf ("JUVENIL B ");
      }
      else if (idade>=18){
          printf ("\n\n Sua Categoria de nadador: ");
          printf ("ADULTO");
      }
      else{
          printf ("\n\n Voce nao se encaixa em nenhuma das categorias");
      }
 }