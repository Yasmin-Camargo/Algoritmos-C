//DESAFIO 1
//NOME: Yasmin Souza Camargo

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Escopo das funções:
void mostraArena();
void mover();
void obstaculos();
void procuraObstaculo();

//Variaveis globais:
char matrizArena[10][10];
int posicao1=4, posicao2=4;


int main()
{
    //declaração das váriaveis
    int quantBarreiras = 3;         //Num de barreiras
    char caracterbarreira = '$';    //Caracter que representa as barreiras

    int i=0, j=0, op=0, teste=0;
    
    srand(time(NULL));

    //Inicialização das posições da arena
    for (i=0; i < 10 ; i++){
        for (j=0; j < 10 ; j++){
            matrizArena[i][j] = '__';
        }
    }
    matrizArena[ posicao1 ][ posicao2 ] = '0'; //definindo posição inicial do jogador

    //preenchendo obstáculos:
    for(i=0; i<quantBarreiras; i++){    
        obstaculos(caracterbarreira);
    }

    system("cls");
    printf("\n\n          --- Ola! --- \n\n   Seja muito bem vindo ao desafio 1 \n\n\n\n");
    system("pause");
    system("cls");
    printf("\n\n Esta e a sua arena:");
    mostraArena();
    printf("\n\n Sempre que voce quiser se mover digite a opcao correspontente\n");
    printf("\n As barreiras sao representadas pelos carcteres: %c \n", caracterbarreira);
    printf(" Voce e o numero 0\n\n\n");
    system("pause");
    system("cls");
    
    do { 
        system("cls");       
        mostraArena();
        
        printf("\n\n 1 (cima)    ");
        printf("2 (baixo)    ");
        printf("3 (esquerda)    ");
        printf("4 (direita)    ");
        printf("5 (sair)    ");
       
        printf("\n\n Escolha uma opcao: ");
        scanf ("%d", &op);
        
        mover(op, caracterbarreira);
    } while(op!=5);

    return 0;
}

//Funções:
void mostraArena(){
    int i, j;
    for (i=0; i<10 ; i++){
        printf("\n     ");
        for (j=0;j<10 ; j++){
            printf (" %c  ",  matrizArena[i][j]);
        }
    }
}

void mover(op, caracterbarreira){
    int op2;
    switch (op){
    case 1:
        if (posicao1 - 1 >= 0){ //IF para não sair dos limites da arena
            if (matrizArena[posicao1-1][posicao2] != caracterbarreira){ //IF identificar uma barreira
                matrizArena[posicao1][posicao2]='__';
                posicao1-=1;
                matrizArena[posicao1][posicao2]='0';
            }
            else{
                system("cls");
                mostraArena();
                printf("\n\n  Voce nao pode mover para essa posicao\n\n");
                system("pause");
            }
        }
        else{
            system("cls");
            mostraArena();
            printf("\n\n  O comando leva o jogador para fora da matriz!!\n\n ");
            system("pause");
        }
        break;

    case 2:
        if (posicao1 + 1 < 10){
            if (matrizArena[posicao1+1][posicao2] != caracterbarreira){
                matrizArena[posicao1][posicao2]='__';
                posicao1+=1;
                matrizArena[posicao1][posicao2]='0';
            }
            else{
                system("cls");
                mostraArena();
                printf("\n\n  Voce nao pode mover para essa posicao\n\n");
                system("pause");
            }
        }
        else{
            system("cls");
            mostraArena();
            printf("\n\n  O comando leva o jogador para fora da matriz!!\n\n ");
            system("pause");
        }
        break;

    case 3:
        if (posicao2 - 1 >= 0){
            if (matrizArena[posicao1][posicao2-1] != caracterbarreira){
                matrizArena[posicao1][posicao2]='__';
                posicao2-=1;
                matrizArena[posicao1][posicao2]='0';
            }
            else{
                system("cls");
                mostraArena();
                printf("\n\n  Voce nao pode mover para essa posicao\n\n");
                system("pause");
            }
        }
        else{
            system("cls");
            mostraArena();
            printf("\n\n  O comando leva o jogador para fora da matriz!!\n\n ");
            system("pause");
        }
        break;

    case 4:
        if (posicao2 + 1 < 10){
            if (matrizArena[posicao1][posicao2+1] != caracterbarreira){
                matrizArena[posicao1][posicao2]='__';
                posicao2+=1;
                matrizArena[posicao1][posicao2]='0';
            }
            else{
                system("cls");
                mostraArena();
                printf("\n\n  Voce nao pode mover para essa posicao\n\n");
                system("pause");
            }
        }
        else{
            system("cls");
            mostraArena();
            printf("\n\n  O comando leva o jogador para fora da matriz!!\n\n ");
            system("pause");
        }
        break;

    case 5:
        system("cls");
        printf("\n\n\n\n  --- Obrigada por jogar! Volte sempre ---  \n\n\n");
        system("pause");
        break;

    default:
        system("cls");
        mostraArena();
        printf("\n\n  Voce nao pode se mover para essa posicao!");
        printf("\n\n  O comando leva o jogador para um obstaculo!");
        printf("\n  Mais um obstaculo foi adicionado!\n\n");
        system("pause");
        procuraObstaculo(caracterbarreira);
        break;
    }
}

//Obstáculos da arena
void obstaculos
(caracterbarreira){
    int x1, x2;
    x1 = rand() % 10;  //gera obstaculos aleatórios
    x2 = rand() % 10;
    //para adicionar um obstaculo: não pode ser onde já existe uma barreira, na posição do 0 e fora dos limites da arena
    if(matrizArena[x1][x2]!=caracterbarreira && matrizArena[x1][x2]!='0' && x1>=0 && x2<10){
        matrizArena[x1][x2]= caracterbarreira;
    }
    else{
        x1 = rand() % 10;
        x2 = rand() % 10;
        matrizArena[x1][x2]= caracterbarreira;
    }
}

void procuraObstaculo(caracterbarreira){ //procura um obstáculo para redirecionar o usuário
    int i, j;
    for (i=0 ; i<10 ; i++){
        for (j=0 ; j<10 ; j++){
            if (matrizArena[i][j] == caracterbarreira){ //teste para encontrar obstáculo
                if (matrizArena[i+1][j] != caracterbarreira && i + 1 < 10){ //teste para não colocar o usuário fora da zona
                    matrizArena[posicao1][posicao2]='__';
                    posicao1=i+1;
                    posicao2=j;
                    matrizArena[posicao1][posicao2]='0';
                }
                else if (matrizArena[i-1][j] != caracterbarreira && i - 1 >= 0){
                    matrizArena[posicao1][posicao2]='__';
                    posicao1=i-1;
                    posicao2=j;
                    matrizArena[posicao1][posicao2]='0';
                }
                else if (matrizArena[i][j+1] != caracterbarreira && j + 1 < 10){
                    matrizArena[posicao1][posicao2]='__';
                    posicao1=i;
                    posicao2=j+1;
                    matrizArena[posicao1][posicao2]='0';
                }
                else if (matrizArena[i][j-1] != caracterbarreira && j - 1 >= 0){
                    matrizArena[posicao1][posicao2]='__';
                    posicao1=i;
                    posicao2=j-1;
                    matrizArena[posicao1][posicao2]='0';
                }
            }
        }
    }
    obstaculos(caracterbarreira); //adiciona mais um obstáculo
}
