//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 1 – AULA 3
3) Escreva um algoritmo para ler o número total de eleitores de um município, o
número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um
representa em relação ao total de eleitores. */

#include <stdio.h>
 int main (){
    
     float eleitores=0, brancos=0, nulos=0, validos=0;
     float percentualbranco=0, percentualnulo=0, percentualvalido=0;
      
      printf ("\n Digite a quantidade de eleitores: ");
      scanf ("%f", &eleitores);
      printf ("\n Digite a quantidade de votos brancos: ");
      scanf ("%f", &brancos);
      printf ("\n Digite a quantidade de votos nulos: ");
      scanf ("%f", &nulos);
      printf ("\n Digite a quantidade de votos validos: ");
      scanf ("%f", &validos);

      percentualbranco = (brancos/eleitores)*100;
      percentualnulo = (nulos/eleitores)*100;
      percentualvalido = (validos/eleitores)*100;

      printf ("\n \n \n A pocentagem dos votos para %2.f eleitores:", eleitores);
      printf ("\n Brancos: %2.f%% dos votos", percentualbranco);
      printf ("\n Nulos: %2.f%% dos votos", percentualnulo);
      printf ("\n Validos: %2.f%% dos votos", percentualvalido);

 }