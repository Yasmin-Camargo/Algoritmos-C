 
  
//NOME: Yasmin Souza Camargo

/* - Exercícios - Algoritmos sobre matrizes I -
16.7.Ler um vetor G de 13 elementos que contenha o gabarito da loteria esportiva codificado da seguinte
forma: 1-coluna um, 2-coluna do meio, 3-coluna dois.
Logo após, ler uma matriz 13 x 3 que contenha a aposta de um jogador. Considere que cada posição da
matriz armazenará o valor 1 se for apostado, 0 caso contrário. Calcular e escrever o número de pontos
obtidos pelo jogador. Escrever também o número de apostas simples, dupla ou tripla utilizadas pelo
apostador
*/

#include <stdio.h>
 int main (){
     int i=0, j=0, gabarito[13][3], aposta[13][3], acertos=0;
     int tipo=0, simples=0, dupla=0, tripla=0;

     printf ("\n Por favor, Informe o gabarito da loteria:");
     for (i=0; i<13; i++){
         for (j=0; j<3; j++){
            printf ("\n Linha %d - coluna %d: ", i+1, j+1);
            scanf ("%d",&gabarito[i][j]);
            if (gabarito[i][j]==0 || gabarito[i][j]==1){
                printf ("\n");
            }
            else{
                printf ("\n O NUMERO DIGITADO DEVE SER 0 OU 1");
                j--;
            }
         }
     }
     
    printf ("\n \n Por favor, Informe a aposta do jogador:");
    printf ("\n \n 1 para apostar e 0 caso nao deseje");
     for (i=0; i<13; i++){
         tipo=0;
         for (j=0; j<3; j++){
            printf ("\n Deseja Apostar na posicao: \n - Linha %d - coluna %d: ", i+1, j+1);
            scanf ("%d", &aposta[i][j]);
            if (aposta[i][j]==0 || aposta[i][j]==1){
                if (aposta[i][j]==1){
                    tipo++;
            }
            }
            else{
                printf ("\n O NUMERO DIGITADO DEVE SER 0 OU 1");
                j--;
            }
         }
         if (tipo==3){
             tripla++;
         }
         else if (tipo==2){
             dupla++;
         }
         else if (tipo==1){
             simples++;
         }
     }

    for (i=0; i<13; i++){
         for (j=0; j<3; j++){
            if(gabarito[i][j] == 1  && aposta[i][j]==1){
                acertos++;
            }
         }
     }
    
    printf ("\n\n\n Numero de acertos: %d", acertos);
    printf ("\n Numero de aposta simples: %d", simples);
    printf ("\n Numero de aposta dupla: %d", dupla);
    printf ("\n Numero de aposta tripla: %d", tripla);
     
 }