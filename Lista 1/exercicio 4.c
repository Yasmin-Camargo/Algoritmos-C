//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 1 – AULA 3
4) O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao
consumidor */

#include <stdio.h>
 int main (){
    
     float custofabrica=0, custototal=0;
      
      printf ("\n DIgite o custo de fabrica do carro: ");
      scanf ("%f", &custofabrica);
     
      custototal = (custofabrica*0.28)+(custofabrica*0.45)+custofabrica;

      printf ("\n \n Valor total do carro:  RS %.2f ", custototal);
 }