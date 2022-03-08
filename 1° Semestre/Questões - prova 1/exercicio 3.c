//NOME: Yasmin Souza Camargo

/* - Prova de Algoritmos e programação -
3. Um	 pesquisador	 está	 investigando	 sobre	 mudanças	 climáticas	 e	 precisa	 calcular	 a	 média de	
temperatura	e	pressão	atmosférica	de	um	mês	de	dados.	Escreva	um	programa	que	leia	30 valores	
que	representem	dados	de	temperatura	e	pressão	atmosférica	diários	medidos.	Escreva	as	médias	
de	temperatura	e	pressão	atmosférica	deste	mês	e	a	temperatura	do	dia	mais	quente.
*/

#include <stdio.h>
 int main (){
     int cont=0;
     float temp = 0, atm = 0, media1 = 0, media2 = 0, maior=0;

     for (cont=1; cont <= 30; cont++) {
         printf ("\n DIA %d", cont);  
         printf ("\n Temperatura: ");
         scanf ("%f", &temp);
         printf (" Pressao: ");
         scanf ("%f", &atm);

         media1 = media1 + temp; //Somando valores digitados
         media2 = media2 + atm;

        if (cont==1){   //Se for o primeiro valor digitado ira armazenar na variavel
            maior = temp;
        }
        else if (temp > maior){ //Testa qual é a maior temperatura digitada
            maior = temp;
        }
     } 

     media1 = media1 / 30;  //calculo da media de temperatura e pressão para 30 dias
     media2 = media2 / 30;

     printf ("\n\n DADOS DO MES ");
     printf ("\n - Media de temperaturas: %.2f grau Celsius", media1);
     printf ("\n - Media de pressao: %.2f atm", media2);
     printf ("\n - Maior temperatura registrada: %.2f grau Celsius ", maior);
 }