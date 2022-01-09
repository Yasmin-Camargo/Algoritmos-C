//NOME: Yasmin Souza Camargo

/*Lista de Exercícios extra - 11 – Algoritmos com repetição V
7. Faça um programa que leia 10 números, considere que serão lidos números
inteiros e positivos. Se o número lido for menor que 7, calcule o seu fatorial. Se
for maior ou igual a 7, calcule a soma de 1 até o número lido.
*/

#include <stdio.h>
 int main (){
     float num, fatorial=0, total =0;
     int cont=0, cont2=0, cont3=0;

     for (cont=1; cont<=10; cont++) {
         printf ("\n\n\nDigite o numero %d: ", cont);
         scanf("%f", &num);

         if (num<=0){
             printf ("\nDIGITE UM NUMERO POSITIVO");
             cont--;
         }

         else if (num>0 && num<7){
            cont2=1;
            fatorial = num;
            while (cont2<num){
                fatorial = fatorial * cont2;
                cont2++;
            }
            printf ("\nFatorial de %.2f: %2.f",num, fatorial);
         }
         
         else if (num>0 && num>=7){
            cont3 = 0;
            while (cont3<=num){
                total = total + cont3;
                cont3++;
            }
            printf ("\nSoma de 1 ate %.2f: %.2f",num, total);
         }
     }
     
     
 }