#include <stdio.h>
#include <string.h>

int main() {
    char palavraSecreta[20];
    sprintf(palavraSecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;
    int tamanhoDaPalavra = strlen(palavraSecreta);

    char letrasCertas[26];
    int tentativas = 0;



    while (!acertou  && !enforcou ){
        char letraDigitada;
        printf("Digite uma letra\n");
        scanf(" %c", &letraDigitada);


        // a lista lista certa receba a letra digitada exemplo digito m a listacerta recebe m no indice 0 porque e minha primeira tentativa
        letrasCertas[tentativas] = letraDigitada;
        tentativas++;

        for (int i = 0; i < tamanhoDaPalavra; i++){  

            int achou = 0;
            for (int j = 0; j < tentativas; j++){
                // compara se a letra certa em cada indice da palavra e igual caso nao seja cai no else caso seja ele corta esse for e cai no if
                if(letrasCertas[j] == palavraSecreta[i]){
                    achou = 1;
                    break;
                }
            }
            if(achou){
                printf("%c ", palavraSecreta[i]);
            }else{
                printf("_ ");
            }    
        }
        printf("\n"); 
    }
    }

    // palavraSecreta[0] = 'm';
    // palavraSecreta[1] = 'e';
    // palavraSecreta[2] = 'l';
    // palavraSecreta[3] = 'a';
    // palavraSecreta[4] = 'n';
    // palavraSecreta[5] = 'c';
    // palavraSecreta[6] = 'i';
    // palavraSecreta[7] = 'a';