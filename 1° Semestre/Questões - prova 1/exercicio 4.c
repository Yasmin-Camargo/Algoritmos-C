//NOME: Yasmin Souza Camargo

/* - Prova de Algoritmos e programação -
4. Escreva	um	algoritmo	que	leia	uma	quantidade	indeterminada	de	idades	de	pessoas (condição	de	
término	será	a	digitação	de	um	valor	negativo).	Conte	e	mostre	quantas	destas	pessoas	ainda	não	
podem	votar (idade <	16	anos).
*/

#include <stdio.h>
 int main (){
     int idade = 0, cont=1, votar=0;
     
     printf ("\n - Para sair do programa digite um numero negativo - ");
     while (idade >= 0){
         printf ("\n\n Digite a idade da pessoa %d: ", cont);
         scanf ("%d", &idade);
         
         if (idade>=0 && idade<16){  //Teste para ver quem não pode votar
            votar++;
         }
        cont++;
     }
     
     cont = cont-2;    //descontar o numero negativo (que não é uma pessoa)

     printf ("\n\n Total de pessoas: %d ", cont);
     printf ("\n Numero de pessoas que nao podem votar: %d", votar);
     
 }