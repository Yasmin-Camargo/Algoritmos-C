//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 1 - Semana 1
8) Um motorista de taxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o preço do combustível é de R$ 2,70, escreva um programa para ler: a marcação do odômetro
(Km) no início do dia, a marcação (Km) no final do dia, o número de litros de combustível
gasto e o valor total (R$) recebido dos passageiros. Calcular e escrever: a média do consumo
em Km/L e o lucro (líquido) do dia. */

#include <stdio.h>
int main()
{
    float inicio, fim, litros, passageiros;

    printf ("Digite a marcacao do odometro(Km) no inicio do dia, a marcacao (Km) no final do dia, o numero de litros d combustivel gasto e o valor total (R$) recebido dos passageiros: \n");
    scanf ("%f%f%f%f",&inicio, &fim, &litros, &passageiros);
    printf ("\nmedia do consumo em Km/L: %.2flitros",(fim-inicio)/litros);
    printf ("\nlucro (liquido) do dia.: RS%.2f", passageiros-(litros*2.70));
 
}

