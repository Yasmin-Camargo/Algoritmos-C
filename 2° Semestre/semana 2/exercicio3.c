//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS Estruturas de repetição - Semana 2 
Escrever os números de 1 a n com seus respectivos divisores. Siga o formato:
1: 1
2: 1 2
3: 1 3
4: 1 2 4
5: 1 5
6: 1 2 3 6
7: 1 7
8: 1 2 4 8  */

#include <stdio.h>
int main()
{
    int num,i,f;
    printf ("Digite um numero: ");
    scanf ("%d",&num);
    for (i=1; i<=num; i++){
        printf("%d: ",i);
        for (f=1; f<=num; f++){ 
            if (i%f == 0){
                printf(" %d",f);
            } 
        }
        printf("\n");
    }
    
}

