//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS Estruturas condicionais - Semana 2 
Escreva um programa para ler 2 valores (considere que não serão lidos valores iguais) e escreve-los em ordem crescente  */

#include <stdio.h>
int main()
{
    int n1, n2;
    printf ("\nDigite dois valores: \n");
    scanf ("%d%d", &n1, &n2);

    printf ("\nValores em ordem crescente:");
    if (n2>n1){
        printf ("\n%d\n%d", n1, n2);
    }
    else if (n1>n2){
        printf ("\n%d\n%d", n1, n2);
    }
    else{
        printf ("\nOs numero nao devem ser iguais");
    }
    
    return 0;
}

