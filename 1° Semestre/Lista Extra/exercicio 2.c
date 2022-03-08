//NOME: Yasmin Souza Camargo

/* - Prova 2 - Algoritmos e programação -
2) Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e
uma letra. Se a letra for A o procedimento calcula a média aritmética das
notas do aluno e se for P, a média ponderada (pesos: 5, 3 e 2). A média
calculada também deve retornar por parâmetro
*/

#include <stdio.h>

float media(float n1, float n2, float n3, char letra) {
    float retorno=0;
    if (letra == 'A') {
        retorno = (n1 + n2 + n3) / 3;
    } else if (letra == 'P') {
        retorno = (n1*5 + n2*3 + n3*2) / 10;
    }
    return retorno;
}

int main(){
    float nota1=0, nota2=0, nota3=0, mediafinal=0;
    char letra;

    printf("\n\n Digite uma letra (A ou P): ");
    scanf("%c", &letra);

    printf("\n Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\n Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("\n Digite a terceira nota: ");
    scanf("%f", &nota3);

    mediafinal = media(nota1, nota2, nota3, letra);

    printf("\n ---> Media Final: %.2f", mediafinal);

}