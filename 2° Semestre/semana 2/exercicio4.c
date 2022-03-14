//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS Estruturas de repetição - Semana 2 
Escreva um algoritmo que imprima toda a tabuada (de 1 a 10) utilizando uma estrutura de
repetição */

#include <stdio.h>
int main()
{
    int num, cont=1;

    printf ("\nDigite um numero: ");
    scanf ("%d", &num);

    while (cont<=10){
        printf ("\n%d X %2.0d = %3.0d",num, cont, num*cont);
        cont++;
    }
    
    
}

