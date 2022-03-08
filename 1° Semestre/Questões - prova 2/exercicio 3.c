//NOME: Yasmin Souza Camargo

/* - Prova 2 - Algoritmos e programação -
3. O opressor galático Thanos quer reduzir a população dos seres vivos no universo. Ele consegue dizimar 1/15 
dos seres por dia. Escreva um programa em C que leia o numero de seres do universo e conte quantos dias ele irá 
levar para reduzir a população pelo menos à metade( usar uma estrutura de repetição para contar)
*/

#include <stdio.h>
#include <string.h>

int main(){
    int dias=0, cont=1;                                                 //Declaração das variaveis        
    float populacao=0, dizimados=0, pessoadia=0, metade=0, total=0;

    printf("\n\n ---- Ola! ----");
    printf ("\n\n Digite o numero de seres no universo: ");             //Entrada de dados
    scanf ("%f",&populacao);

    dizimados = populacao;
    metade = populacao/2;

    for (dias=1 ; total < metade ; dias++){              //calculo dos dias para reduzir população para a metade   
        pessoadia = 0.0666 * dizimados ;
        dizimados = dizimados - pessoadia;
        total = total + pessoadia;
        if (total < metade){
            printf("\n\n Dia %d - Total de pessoas mortas: %1.f", dias, total);
        }
    }
    
    printf ("\n\n\n --> Dias para dizimar metade da populacao: %d \n\n", dias-2);  //mostra a quantidade de dias
    
}