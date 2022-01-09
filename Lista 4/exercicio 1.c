//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 4 – AULA 7, 8 e 9
1. Escreva um algoritmo para repetir a leitura de um número enquanto o valor
fornecido for diferente de 0. Para cada número fornecido, imprimir se ele é
NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve
ser encerrada sem imprimir mensagem alguma
*/

#include <stdio.h>
 int main (){
     float n1, cont=0;
     
     do{
         printf ("\n\n \n\n Digite um numero: ");
         scanf ("%f",&n1);
         if (n1<0){
             printf ("\n O numero e negativo ");
         }
         else if (n1>0){
              printf ("\n O numero e positivo ");
         }
     } while (n1 != 0);
     
 }