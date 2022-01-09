//NOME: Yasmin Souza Camargo

/* - Prova de Algoritmos e programação -
1. Escreva um algoritmo que leia 50 valores que representem preços de produtos. Escreva o valor do
produto mais caro e dê um desconto de 12% para o produto mais barato
*/

#include <stdio.h>
 int main (){
     int cont=0;
     float valor = 0, maior=0, menor=0, desconto=0;;

     for (cont = 1; cont<=50; cont++){
        printf ("\n Digite o preco do produto %d: ", cont);
        scanf ("%f", &valor);

        if (cont==1){ //Se for o primeiro número digitado ira armazenar na variavel
            menor = valor;
            maior = valor;
        }

        if (valor > maior){ //teste para encontrar o produto mais caro
            maior = valor;
        }
        else if (valor < menor){ //teste para encontrar o produto mais barato
            menor = valor;
        }
     }
    
    desconto = menor - (menor * 0.12);  //desconto de 12%

    printf ("\n\n\n Produto mais caro: %.2f reais", maior);
    printf ("\n Produto mais barato: %.2f reais, com desconto de 12%%: %.2f reais", menor, desconto);
     
 }