

/*  Questão 1:
    Loja do seu Manoel
*/

#include <stdio.h>
 int main (){
     int cont=0, alt=0, larg=0, comp=0, quant=0, caixa1=0, caixa2=0 ,caixa3=0;
    
    printf ("\n\n Este e um programa que recebe as dimensoes dos produtos da compra e fala qual a caixa ideal");
    printf ("\n   - Quantos Produtos voce deseja cadastrar: ");
    scanf ("%d", &quant);

     while (cont != quant)
     {
         //Entrada de dados
          printf ("\n Qual a Altura da caixa: ");
          scanf ("%d", &alt);
          printf (" Qual a Largura da caixa: ");
          scanf ("%d", &larg);
          printf (" Qual o Comprimento da caixa: ");
          scanf ("%d", &comp);
         

        //Teste da melhor caixa
          if (alt < 30){
            if (larg <= 40){
                 if (comp <= 10){
                     caixa1++;
                    printf ("\n\n CAIXA 1\n");
                 }
                 else if (comp <= 40){
                    caixa2++;
                    printf ("\n\n CAIXA 2\n");
                 }
                 else if (comp <= 60){
                    caixa3++;
                    printf ("\n\n CAIXA 3\n");
                 }
            }
            else if (larg <= 50){
                if (comp <= 40){
                    caixa2++;
                    printf ("\n\n CAIXA 2 \n");
                 }
                else if (comp <= 60){
                    caixa3++;
                    printf ("\n\n CAIXA 3 \n");
                 } 
            }
            else if (larg <= 80){
                if (comp <= 60){
                    caixa3++;
                    printf ("\n\n CAIXA 3\n");
                 }
            }
          }


          else if (alt > 50 && alt < 80){
            if (larg <= 50){
                 if (comp <= 40){
                    caixa2++;
                    printf ("\n\n CAIXA 2\n");
                 }
                 else if (comp <= 60){
                    caixa3++;
                    printf ("\n\n CAIXA 3 \n");
                 }
            }
            else if (larg <= 80){
                 if (comp <= 60){
                    caixa3++;
                    printf ("\n\n CAIXA 3\n");
                 }
            }
          }

          else if (alt >= 30 && alt <= 50){
              if (larg <= 80){
                 if (comp <= 60){
                    caixa3++;
                    printf ("\n\n CAIXA 3 \n");
                 }
                else {
                    printf ("\n\n Nenhuma caixa entra nos padroes\n");
                 }
              }
            else {
              printf ("\n\n Nenhuma caixa entra nos padroes\n");
            }
            
          }
          else {
              printf ("\n\n Nenhuma caixa entra nos padroes\n");
          }
          cont++;
     }
     printf ("\n\nPara embalar seus pacotes voce vai precisar de:");
     printf ("\n%d pacotes da caixa 1", caixa1);
     printf ("\n%d pacotes da caixa 2", caixa2);
     printf ("\n%d pacotes da caixa 3", caixa3);
    
 }