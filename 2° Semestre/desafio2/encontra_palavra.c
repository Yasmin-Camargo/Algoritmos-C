//DESAFIO 2
//NOME: Yasmin Souza Camargo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *arquivo;
    
    char nome[] = "yasmin";  //------------------------------> MUDAR NOME AQUI
    
    //abrindo o arquivo
    arquivo = fopen("./arquivos/strings1.txt", "r");  //------> MUDAR LOCAL DO AQUIVO AQUI
    
    //Declaração das Váriaveis
    char palavra[500], menor_palavra_encontrada[500];
    char teste_nome[500], temp[500];
    char letra[] = " ", caracter;
    int i,cont, quant_palavras=0;
    char* p;


    //Verifica se o arquivo existe
    if (arquivo == NULL){
        printf("\n\nERRO! O arquivo nao foi aberto!\n");
        printf("\nVerifique se a variavel ""arquivo"" esta com o caminho correto\n\n");
        return 1;
    }

    //Inicializando variaveis
    strcpy(palavra,"");
    strcpy(teste_nome," ");
    strcpy(temp," ");
    strcpy(menor_palavra_encontrada,"#"); //Caracter # indica que é a primeira palavra que será armazenada na variável

    strupr(nome); //Coloca em letra maiuscula o nome digitado
    
    //Mostra informações na tela
    printf("\n ________________________ \n");
    printf("| NOME ESCOLHIDO: %s | \n", nome);
    printf("|------------------------|\n");
    printf("\nPALAVRAS ENCONTRADAS: ");


    //Lê arquivo caracter por caracter
    while ( (caracter = fgetc(arquivo)) != EOF){
        if (caracter == ' ' || caracter == '\n'){ //Começar testes quando a palavra estiver formada
            i=0;
            
            //Verificando se o caracter existe na palavra
            while (i < strlen(nome)){ 
                letra[0]=nome[i];
                p = strstr(palavra, letra);
                if (p) {
                    teste_nome[i] = '1'; //grava 1 na posição em que a letra existe
                }
                i++;
            }

            //Analisa se todas as letras foram encontradas
            cont=0;
            i=0;
            while (i < strlen(nome)){
                if (teste_nome[i]=='1'){
                    cont++; //conta quantas letras foram encontradas
                    teste_nome[i]='0'; //reinicializa posição para a próxima execução
                }
                i++;
            }

            //Mostra palavras que foram encontradas e testa a menor delas
            if (cont == strlen(nome)){ //ocorre quando o num de letras encontradas é igual ao tamanho da palavra
                quant_palavras++;
                printf("\n   -----------------------------------------------------------------------------");
                printf("\n   %d) %s",quant_palavras, palavra);

                //Armazena na variavel quando é a primeira execução ou quando encontrou uma palavra menor
                if((menor_palavra_encontrada[0]=='#') || (strlen(palavra) < strlen(menor_palavra_encontrada))){ 
                    strcpy(menor_palavra_encontrada, palavra);
                }
            } 
            cont=0;
            strcpy(palavra," "); 

        }

        else{    //Armazena caracteres que irão formar uma palavra
            temp[0]=caracter;
            strcat(palavra,temp);
        }
     
    }
    
    printf("\n   -----------------------------------------------------------------------------\n");
    printf("\n\nNUMERO DE PALAVRAS ENCONTRADAS: %d palavras\n",quant_palavras); //Mostra a quantidade de palavras encontradas
    printf("\nMENOR PALAVRA ENCONTRADA:");
    printf("\n   -----------------------------------------------------------------------------");
    printf("\n   %s",menor_palavra_encontrada); //Mostra a menor palavra
    printf("\n   -----------------------------------------------------------------------------\n\n");
    
    // fechando arquivo
    fclose(arquivo);

    return 0;
}

