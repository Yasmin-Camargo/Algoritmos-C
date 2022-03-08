//NOME: Yasmin Souza Camargo

/* - Prova 2 - Algoritmos e programação -
2. Esscreva um programa em C que leia uma palavra e diga se é ou não um palíndromo. Um palindromo
é um palavra ou frase que escrita de maneira inversa é igual a original. ROMA = AMOR
*/

#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[100], palavra2[100];                             //Declaração das variaveis
    int cont=0, cont2=0, tamanho=0, palindromo=0;

    printf("\n\n ---- Ola! ----");
    printf("\n\n Digite uma palavra: ");     //Entrada de dados
    gets(palavra1);

    tamanho = strlen(palavra1);  //Conta quantos caracteres a palavra possui
    cont2 = tamanho;
   
    for (cont=0 ; palavra1[cont] != '\0' ; cont++){  //gera a palavra inversa
        palavra2[cont2]=palavra1[cont];
        cont2--;
    }
    palavra2[tamanho+1] = '\0';

    cont2=1;
    for (cont=0 ; palavra1[cont] != '\0' ; cont++){      //Testa se a palavra escrita de maneira inversa é igual a original
        if (palavra1[cont]==palavra2[cont2]){
            palindromo++;
        }
        cont2++;
    }

    printf("\n\n --> Palavra Original: %s", palavra1);  //mostra a palavra original
    printf("\n --> Palavra Inversa: %s", palavra2);    //mostra a palavra inversa

    if (tamanho==palindromo){       //testa se é ou não um palindromo
        printf("\n --> E um Palindromo? SIM");
        printf("            A palavra escrita de maneira inversa e igual a original \n\n"); 
    }
    else {
        printf("\n --> E um Palindromo? NAO \n\n"); 
        printf("            A palavra escrita de maneira inversa NAO e igual a original \n\n"); 
    }
    
    
    /*
    OBS: Roma não é um palindromo, pois Palíndromos são palavras ou frases que podem ser lidas da esquerda 
    para a direita ou da direita para a esquerda da mesma forma.
    Logo, roma é diferente quando lemos assim, pois deveria formar a mesma palavra e forma a palavra amor.

    Exemplos de palindromos: osso, ana, saias, rir, apos a sopa, 
    */
}