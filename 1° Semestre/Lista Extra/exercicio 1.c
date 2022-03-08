//NOME: Yasmin Souza Camargo

/* - Prova 2 - Algoritmos e programação -
1) Faça uma função que receba um número inteiro n, e imprima os números de 1 até n
*/

#include <stdio.h>

 void imprime (int n){      
     int cont=0;
     printf ("\n Contagem de 1 ate %d:", n);
     for (cont=1 ; cont<=n; cont++){
         printf ("\n %d", cont);
     }
 }

 int main (){
     int num=0;
     printf ("\n Digite um numero:");
     scanf ("%d",&num);

     imprime(num);   
 }

 