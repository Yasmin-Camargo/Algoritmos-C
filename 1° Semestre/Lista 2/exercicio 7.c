//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 4 – AULA 5 
7) Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este
número é par ou ímpar, e se é positivo, negativo ou zero */

#include <stdio.h>
 int main (){
     int num=0, teste;
     
      printf ("\n Digite um numero inteiro: ");
      scanf ("%d", &num);

      teste = num % 2;
      
      printf ("\n\n\n %d e um numero: ", num);
      if(teste==0){
         printf ("\n   - Par "); 
      }
      else if(teste==1){
         printf ("\n   - Impar "); 
      }
      
      if(num>0){
         printf ("\n   - Positivo "); 
      }
      else if(num<0){
         printf ("\n   - Negativo "); 
      }
      else {
         printf ("\n   - Zero "); 
      }
 }