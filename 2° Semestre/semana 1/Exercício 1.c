//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS – Semana 1
1) Escreva um programa para ler o raio de um círculo, calcular e escrever a sua área */
    
#include <stdio.h>
#define pi 3.14159265359
int main()
{
    float raio, area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = pi*(raio*raio);
    printf("Area do circulo: %.3f", area);
    return 0;
}

