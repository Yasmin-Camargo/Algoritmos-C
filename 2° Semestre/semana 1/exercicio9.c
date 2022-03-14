//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 1 - Semana 1 
9) Uma loja vende bicicletas com um acréscimo de 50% sobre o seu preço de custo. Ela paga a
cada vendedor 2 salários-mínimos mensais, mais uma comissão de 15 % sobre o preço de
custo de cada bicicleta vendida, dividida igualmente entre eles. Escreva um programa que
leia o número de empregados da loja, o valor do salário-mínimo, o preço de custo de cada
bicicleta, o número de bicicletas vendidas, calcule e escreva: O salário final de cada
empregado e o lucro (líquido) da loja. */

#include <stdio.h>
int main()
{
    float empregados, salario, custobike, vendas;

    printf ("Digite respectivamente: \n\t- o numero de empregados da loja \n\t- o valor do salario-minimo \n\t- o preco de custo de cada bicicleta \n\t- o numero de bicicletas vendidas \n");
    scanf ("%f%f%f%f",&empregados, &salario, &custobike, &vendas);
    printf ("\nSalario final de cada empregado: R$ %.2f", salario*2+(((0.15*custobike)*vendas)/empregados));
    printf ("\nLucro (liquido) da loja: R$ %2.f", ((custobike*0.5)+custobike)*vendas - ((salario*2)*empregados + (custobike*0.15)*vendas));
    
}

