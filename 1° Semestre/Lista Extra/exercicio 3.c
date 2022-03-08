//NOME: Yasmin Souza Camargo

/* - Prova 2 - Algoritmos e programação -
3) Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = (4/3)*Pi*R^3)
*/

#include <stdio.h>

float calculo(float raio) {
    float volume= 1.333 * 3.14 * (raio * raio * raio);
    
    return volume;
}

int main(){
    float raioEsfera=0, resultado=0;

    printf("\n\n Digite o raio da esfera: ");
    scanf("%f", &raioEsfera);

    resultado = calculo(raioEsfera);
    printf("\n\n Volume da Esfera: %.2f", resultado);
}