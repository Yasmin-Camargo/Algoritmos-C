//NOME: Yasmin Souza Camargo

/*Lista de Exercícios extra - 11 – Algoritmos com repetição V
1) 11.1 Ler 10 valores e escrever quantos destes valores são negativos.
*/

#include <stdio.h>
 int main (){
     int numeros=0,cont, negativo=0;
     printf ("\n Digite 10 numeros \n");
     for (cont=1; cont<=10; cont++){
        printf ("Numero %d: ", cont);
        scanf("%d",&numeros);

        if (numeros < 0){
            negativo++;
        }
     }
     printf ("\n Quantidade de numeros negativos: %d", negativo);   
 }