//NOME: Yasmin Souza Camargo
 
/* -  Exercícios - Algoritmos sobre matrizes I  -
17.3 Ler uma matriz G 5 x 5, classificar cada linha da matriz em ordem crescente. Após o processo de
classificação escrever a matriz.
*/
 
#include <stdio.h>
 
int main (){
    int i=0, j=0, l, c, mat[5][5], aux;
 
    printf ("\n Digite os valores da matriz:");
     for (i=0; i<5; i++){
         printf ("\n");
         for (j=0; j<5; j++){
             scanf ("%d", &mat[i][j]);
         }
     }
   
     for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
             for (l = 0; l < 5; l++) {
                for (c = 0; c < 5; c++) {
                    if (mat[i][j] < mat[l][c]) {
                         aux = mat[i][j];
                         mat[i][j] = mat[l][c];
                         mat[l][c] = aux;
                     }
                }
            }
        }
    }
 
    for (i=0; i<5; i++){
         printf ("\n");
         for (j=0; j<5; j++){
             printf ("  %d", mat[i][j]);
         }
     }
}
