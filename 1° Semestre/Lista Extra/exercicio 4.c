//NOME: Yasmin Souza Camargo

/* - Prova 2 - Algoritmos e programação -
4) Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico 
Verdadeiro caso o valor seja primo e Falso em caso contrário.
*/

#include <stdio.h>

void primo(int valor) {
    int cont=0, teste=0, naoprimo=0;
    for (cont=1; cont<=9 ; cont++){
        teste = valor/cont;
        if (valor%cont == 0){
            naoprimo++;
        }
    }

    if (naoprimo<=2){
        printf("e primo");
    }
    else{
        printf("nao e primo");
    }
}

int main(){
    int num=0;

    printf("\n\n Digite um valor inteiro positivo: ");
    scanf("%d", &num);

    while (num <= 0){
        printf("\n\n !! O numero digitado deve ser inteiro e maior que zero !!\n");
        printf("\n Digite um valor inteiro positivo: ");
        scanf("%d", &num);
    }
    
    printf("\n\n O numero %d ",num);
    primo(num);
    
}