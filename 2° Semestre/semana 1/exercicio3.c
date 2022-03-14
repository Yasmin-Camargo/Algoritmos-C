//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 1 - Semana 1
3) Escreva um programa para ler uma temperatura em graus Fahrenheit, calcular e escrever o
valor correspondente em graus Celsius */

#include <stdio.h>
int main()
{
    int temperatura_fahrenheit;
    float temperatura_celsius;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%d", &temperatura_fahrenheit);
    temperatura_celsius = (((float) temperatura_fahrenheit-32)/9)*5;
    printf("Temperatura em Celsius: %f", temperatura_celsius);
    return 0;
}

