//NOME: Yasmin Souza Camargo

/* - Prova 2 - Algoritmos e programação -
4. Escreva um programa em C que leia 10 valores e armazene-os em um vetor, em seguida leia um
número inteiro que represente um índice deste vetor(validando entre 1 e 10 inclusive). Logo após
retirar o elemento desta posição deslocando os demais elementos.Não deve ficar espaço vazio no
vetor.
*/

#include <stdio.h>
#include <string.h>

int main(){
    int valor[10], indice=0, cont=0;       //Declaração das variaveis
    
    printf("\n\n ---- Ola! ----\n");

    for (cont=0 ; cont < 10 ; cont++){              //Entrada de dados
        printf("\n Digite o valor %d: ", cont+1); 
        scanf("%d", &valor[cont]);
    }
    printf("\n\n Digite um indice: "); 
    scanf("%d", &indice);
    
    cont=0;             //Testa se o indice esta entre 1 e 10
    while (cont!=1){
        if (indice>=1 && indice<=10){
            cont=1;
        }
        else{
            printf("\n\n -- O INDICE DEVE ESTAR ENTRE 1 E 10 --");
            printf("\n Por favor, digite o indice novamente: "); 
            scanf("%d", &indice);
        }
    }

    for (cont=indice-1 ; cont<10 ; cont++){     //substitui valores apartir do indice digitado
        valor[cont]=valor[cont+1];
    }

    printf ("Valores do vetor atualizados: ");  //mostra valores
    for (cont=0 ; cont < 10-1 ; cont++){              
        printf("\n --> Valor [%d]: %d ", cont+1, valor[cont]); 
    }
    
}