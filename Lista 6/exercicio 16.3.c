//NOME: Yasmin Souza Camargo

/* -  Exercícios - Algoritmos sobre matrizes I  -
16.3.Ler uma matriz A de 4 x 4, calcular e escrever as somas dos elementos marcados com o X. Utilizar
estruturas de repetição
*/

#include <stdio.h>
 int main (){
     int i=0, j=0;
     float matriz[4][4], soma[5];
     soma[1]=0;
     soma[2]=0;
     soma[3]=0;
     soma[4]=0;
     
     printf ("\n Digite os valores da matriz:");
     for (i=0; i<4; i++){
         printf ("\n");
         for (j=0; j<4; j++){
             scanf ("%f", &matriz[i][j]);
             if (i<2 && j<2){
                 soma[1]= soma[1] + matriz[i][j];
             }
             if (i>1 && j>1){
                 soma[2]= soma[2] + matriz[i][j];
             }
             if (i >= j){
                 soma[3]= soma[3] + matriz[i][j];
             }
             if (i < j){
                 soma[4]= soma[4] + matriz[i][j];
             }
         }
     }

    printf ("\n\nValores digitados:");
     for (i=0; i<4; i++){
         printf ("\n        ");
         for (j=0; j<4; j++){
            printf ("   %.2f", matriz[i][j]);
         }
     }
     
     printf ("\n\n\n SOMA 1: %.2f", soma[1]);
     printf ("\n SOMA 2: %.2f", soma[2]);
     printf ("\n SOMA 3: %.2f", soma[3]);
     printf ("\n SOMA 4: %.2f", soma[4]);
     
 }