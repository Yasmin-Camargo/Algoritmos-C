//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 1 - Semana 1
5) Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento,
largura e altura), calcular e escrever a quantidade de caixas de azulejos para se colocar em
todas as suas paredes (considere que não será descontado a área ocupada por portas e
janelas). Cada caixa de azulejos possui 1,5 m2. */


#include <stdio.h>
#include <math.h>
int main()
{
    float comprimento, largura, altura;
    float area_total;
    float caixas_azulejos;
    printf("Digite respectivamente as medidas da casa:");
    printf("\nComprimento   Largura  Altura \n");
    scanf("%f%f%f", &comprimento, &largura, &altura);

    area_total = ((largura*altura) + (comprimento*altura));
    caixas_azulejos = area_total/1.5;

    printf("Quantidade de caixas de azulejos necessarias: %.0f", ceil(caixas_azulejos));
    return 0;
}

