//NOME: Yasmin Souza Camargo

/*Lista de Exercícios extra - 11 – Algoritmos com repetição V
11.2 Ler 10 valores e contar quantos estão no intervalo [10,20] e quantos deles estão fora deste intervalo.
Escrever o resultado das duas contagens.
*/

#include <stdio.h>
 int main (){
     int numeros=0,cont, intervalo1=0, intervalo2=0;
     printf ("\n Digite 10 numeros \n");
     for (cont=1; cont<=10; cont++){
        printf ("Numero %d: ", cont);
        scanf("%d",&numeros);

        if (numeros<=20 && numeros>=10){
            intervalo1++;
        }
        else{
            intervalo2++;
        }
     }
     printf ("\n Quantidade de numeros no intervalo 10 a 20: %d", intervalo1);  
     printf ("\n Quantidade de numeros fora do intervalo: %d", intervalo2); 
 }