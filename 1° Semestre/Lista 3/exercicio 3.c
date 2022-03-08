//NOME: Yasmin Souza Camargo

/*LISTA DE EXERCÍCIOS 4 - Algoritmos de seleção
3) Escreva um algoritmo para ler o número de lados de um polígono regular, e a medida do lado(a
medida do lado só deve ser lida para polígono com 3 ou 4 lados). Calcular e imprimir o seguinte:
Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
Se o número de lados for igual a 5 escrever PENTÁGONO.
OBS: Considere que o usuário só informará os valores 3,4 ou 5 */

#include <stdio.h>
 int main (){
     int lados=0;
     float medida=0, perimetro=0;
     
      printf ("\n Digite o numero de lados de um poligono regular: ");
      scanf ("%d",&lados);

      if (lados==3 || lados==4){
          printf ("\n Digite a medida do lado: ");
           scanf ("%f",&medida);
      }

      if (lados==3){
          printf ("\n\n O poligono e: ");
          perimetro = medida * 3;
          printf ("TRIANGULO");
          printf ("\n O perimetro da figura: %.1f", perimetro);
      }
      else if (lados==4){
          printf ("\n\n O poligono e: ");
          perimetro = medida * 4;
          printf ("QUADRADO");
          printf ("\n O perimetro da figura: %.1fs", perimetro);
      }
      else if (lados==5){
          printf ("\n\n O poligono e: ");
          printf ("PENTAGONO");
      }
      else{
          printf ("\n\n NUMERO INVALIDO");
          printf ("\n *Sao aceitos apenas os valores 3, 4 e 5");
      }
 }