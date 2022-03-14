//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 1 - Semana 1
6) Escreva um programa para ler o número de eleitores de um município, o número de votos
brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em
relação ao total de eleitores */


#include <stdio.h>
#include <math.h>
int main()
{
    float eleitores, nulos, brancos, validos;

    printf ("Digite o numero de eleitores de um municipio, o numero de votos brancos, nulos e validos: ");
    scanf ("%f%f%f%f",&eleitores, &nulos, &brancos, &validos);
    printf ("Percentual de representacao:\nNulos: %.2f%% \nBrancos %.2f%% \nValidos %.2f%%", (nulos*100)/eleitores, (brancos*100)/eleitores,(validos*100)/eleitores);

    return 0;
}

