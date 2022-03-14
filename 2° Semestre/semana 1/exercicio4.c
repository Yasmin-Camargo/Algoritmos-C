//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 1 - Semana 1
4) Escreva um programa para ler uma temperatura em graus Celsius, calcular e escrever o valor correspondente em graus Fahrenheit */


#include <stdio.h>
int main()
{
    float temperatura_fahrenheit;
    float temperatura_celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura_celsius);
    temperatura_fahrenheit = (temperatura_celsius*1.8)+32;
    printf("Temperatura em fahrenheit: %.2f", temperatura_fahrenheit);
    return 0;
}

