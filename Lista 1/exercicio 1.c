//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 1 – AULA 3 
1) Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular
e escrever a área do retângulo. */

#include <stdio.h>
 int main (){
     float base=0, altura=0, area=0;
      printf ("\n Digite a base do retangulo em cm: ");
      scanf ("%f", &base);
      printf ("\n Digite a altura do retangulo em cm: ");
      scanf ("%f", &altura);

      area = base * altura;

      printf ("\n \n \n Base: %.2f", base);
      printf ("\n Altura: %.2f", altura);
      printf ("\n Area do retangulo: %.2f", area);

 }