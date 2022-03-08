//NOME: Yasmin Souza Camargo

/*Lista de Exercícios extra - 11 – Algoritmos com repetição V
11.5 Ler 2 valores (considere que o primeiro valor lido sempre será menor que o segundo), calcular e
escrever a soma dos números inteiros existentes entre eles(incluindo os 2 valores lidos na soma).
11.6 Reescreva o exercício anterior considerando que o primeiro pode ser maior que o segundo e viceversa
*/

#include <stdio.h>
 int main (){
     int n1=0, n2=0, cont=0, soma=0;
     
     printf ("\n Digite o primeiro numero: ");
     scanf("%d",&n1);
     printf ("\n Digite o segundo numero: ");
     scanf("%d",&n2);

     printf ("\n Soma dos valores entre %d e %d: ", n1, n2);
     if (n1<n2){
        for (cont=n1; cont<=n2; cont++){
            soma = soma + cont;
        }
     }
     else if (n2<n1){
         for (cont=n2; cont<=n1; cont++){
            soma = soma + cont;
        }
     }
     else{
         printf ("\n Os numeros sao iguais: ");
     }
     
      printf ("%d", soma);
 }