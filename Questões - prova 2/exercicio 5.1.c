//NOME: Yasmin Souza Camargo

/* - Prova 2 - Algoritmos e programação -
5. Para a matriz M(5 X 5) declarada abaixo:
 {0, 1, 1, 0, 0}
 {0, 0, 0, 1, 0}
 {1, 1, 0, 1, 0}
 {0, 1, 0, 0, 0}
 {1, 1, 0, 0, 0}
Suponto	 que	 a	 matriz	 represente	 um	 campo	 minado,	 onde	 “1“	 represente	 uma	 mina	 e	 “0“	
represente	campo limpo.	Escreva	um	algoritmo que	leia	a	matriz	e	um	conjunto	de	dez	pares	de	
valores(l	 ,	 c)	 que	 representem	 os	 índices	 da	 matriz.	 Conte	 quantas	 minas	 foram	 descobretas	 e	
mostre	este	resultado.	
*/

#include <stdio.h>
#include <string.h>

int main(){
    int matriz[5][5], coordenadas[10][2], i=0, j=0, minas=0, auxiliar1, auxiliar2;
    char resultado[5][5];
   
    //Atribuição de valores iniciais
    matriz[0][0]=0;
    matriz[0][1]=1;
    matriz[0][2]=1;
    matriz[0][3]=0;
    matriz[0][4]=0;

    matriz[1][0]=0;
    matriz[1][1]=0;
    matriz[1][2]=0;
    matriz[1][3]=1;
    matriz[1][4]=0;

    matriz[2][0]=1;
    matriz[2][1]=1;
    matriz[2][2]=0;
    matriz[2][3]=1;
    matriz[2][4]=0;

    matriz[3][0]=0;
    matriz[3][1]=1;
    matriz[3][2]=0;
    matriz[3][3]=0;
    matriz[3][4]=0;

    matriz[4][0]=1;
    matriz[4][1]=1;
    matriz[4][2]=0;
    matriz[4][3]=0;
    matriz[4][4]=0;

    for (i=0 ; i < 5 ; i++){
        for (j=0 ; j < 5 ; j++){ 
            resultado[i][j]= '.';
        }
    }
    
    
    printf("\n\n ---- Ola! ----\n");
    printf ("\n Seja bem vindo ao campo minado");

    printf("\n   1   2   3   4   5");
    for (i=0 ; i < 5 ; i++){
        printf("\n%d   ", i+1);
        for (j=0 ; j < 5 ; j++){ 
            printf("%c   ",resultado[i][j]);
        }
    }

    printf ("\n\n Digite as cordenadas do campo minado");

    for (i=0 ; i < 10 ; i++){              //Entrada de dados
    printf("\n Cordenada %d: \n", i+1); 
        for (j=0 ; j < 2 ; j++){    
            if (j==0){
                printf("   Linha: ");
                scanf("%d", &coordenadas[i-1][j-1]);  
            }
            else{
                printf("   Coluna: ");
                scanf("%d", &coordenadas[i-1][j-1]); 
            } 
        }
    }

    for (i=0 ; i < 10 ; i++){              //Entrada de dados
    printf("\n"); 
        for (j=0 ; j < 2 ; j++){    
        printf("%d", coordenadas[i][j]);
        }
    }

    for (i=0 ; i < 10 ; i++){       //Testa quais campos possuem mina
    auxiliar1=coordenadas[i][0];
    auxiliar2=coordenadas[i][1];
        if (matriz[auxiliar1][auxiliar2] == 1){
            resultado[auxiliar1][auxiliar2]= 'X';
            minas++;
        }
        
    }

    printf ("\n\n --> Quantidade de minas descobertas: %d", minas);

    printf("\n   1   2   3   4   5");
    for (i=0 ; i < 5 ; i++){
        printf("\n%d   ", i+1);
        for (j=0 ; j < 5 ; j++){ 
            printf("%c   ",resultado[i][j]);
        }
    }




}