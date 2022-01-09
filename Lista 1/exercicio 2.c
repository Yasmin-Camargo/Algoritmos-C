//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 1 – AULA 3
Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e
mês com 30 dias. */

#include <stdio.h>
 int main (){
    
     int ano=0, mes=0, dia=0, totalano=0, totalmes=0, totaldia=0;
      printf ("\n Qual a sua idade? ");
      scanf ("%d", &ano);
      printf ("\n Quantos meses completos ja se passaram do seu aniversario? ");
      scanf ("%d", &mes);
      printf ("\n E quantos dias do mes que nao esta completo ate hoje? ");
      scanf ("%d", &dia);

      totalano = ano * 365;
      totalmes = mes * 30;
      totaldia = totalano + totalmes + dia;

      printf ("\n \n \n Sua idade em dias: %d dias", totaldia);

 }