//NOME: Yasmin Souza Camargo

/* - Prova de Algoritmos e programação -
2. Escreva um programa que leia o salário de 60 indivíduos (aceitar somente valores positivos). Para
cada valor lido calcule e escreva um aumento de salário segundo dados abaixo:
    2.5% p/ salário > =8000
    10% p/ salário entre 5000 e 8000
    15% p/ o menor <= 5000
*/

#include <stdio.h>
 int main (){
     int cont=0;
     float salario = 0, aumento = 0;

     for (cont = 1; cont<=60; cont++){
        printf ("\n\n\n\n Digite o salario da pessoa %d: ", cont);
        scanf ("%f", &salario);

        if (salario <= 0){     //Teste para verificar se o salario digitado é um valor positivo
            printf ("\n -- DIGITE UM SALARIO COM VALOR POSITIVO --");
            cont--;
        }
        else if (salario>0 && salario<=5000){  //Teste para verificar faixa de valores do salario
            aumento = salario + (salario * 0.15);
            printf ("\n\n Valor do aumento do seu salario e de 15%% ");
            printf ("\n Novo salario: %.2f reais ", aumento);
        }
        else if (salario>5000 && salario<8000){
            aumento = salario + (salario * 0.10);
            printf ("\n\n Valor do aumento do seu salario e de 10%% ");
            printf ("\n Novo salario: %.2f reais ", aumento);
        }
        else if (salario>=8000){
            aumento = salario + (salario * 0.025);
            printf ("\n\n Valor do aumento do seu salario e de 2.5%% ");
            printf ("\n Novo salario: %.2f reais ", aumento);
        }
     }
 }