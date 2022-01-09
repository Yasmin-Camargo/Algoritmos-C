//NOME: Yasmin Souza Camargo

/* - Prova 2 - Algoritmos e programação -
1. Escreva um programa em C que leia uma frase e um caracter. Conte e escreva quantas vezes este
caracter aparece na frase
*/

#include <stdio.h>
#include <string.h>

int main(){
    char letra, palavra[100];       //Declaração das variaveis
    int cont=0, caracter=0;

    printf("\n\n ---- Ola! ----");
    printf("\n\n Digite uma frase: ");     //Entrada de dados
    gets(palavra);
    printf(" Digite uma letra: ");
    scanf("%s", &letra);

    for (cont=0 ; palavra[cont] != '\0' ; cont++){      //Testa se o caracter digitado esta na palavra
        if (palavra[cont]==letra){
            caracter++;
        }
    }
    
    //testa se foram encontrados caracteres e mostra a quantidade deles
    if (caracter==0){
        printf("\n\n --> O caracter '%c' nao foi encontrado na frase '%s'\n\n", letra, palavra);
    }
    else{
        printf("\n\n --> O caracter '%c' aparece %d vezes na frase '%s'\n\n", letra, caracter, palavra);
    } 
}