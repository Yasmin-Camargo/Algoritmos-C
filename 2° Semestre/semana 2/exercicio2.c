//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS Estruturas condicionais - Semana 2 
Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma
mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês
em que ela nasceu).  */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int idade;

    struct tm *data;
    time_t segundos;
    time(&segundos);  
    data = localtime(&segundos); 
    data = data->tm_year+1900;

    printf("%d", data);
    printf ("\nDigite o seu ano de nascimento: ");
    scanf("%d",&idade);
    
    idade = data-idade;
    printf("\nSua idade: %d",idade);
    if (idade>=16 && idade<18){
        printf ("\nVoce ja pode votar");
    }
    if (idade>=18){
        printf ("\nVoce e obrigado a votar");
    }
    else{
        printf ("\nVoce nao tem idade para votar");
    }
    return 0;
}

