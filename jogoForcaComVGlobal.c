#include <stdio.h>
#include <string.h>

char palavraSecreta[20];
char letrasCertas[26];
int tentativas = 0;

void abertura() {
    printf("********************\n");
    printf("***Jogo da Forca****\n");
    printf("********************\n");
}

// o * antes da variavel indica que estou pegando o ponteiro ou o numero onde a memoria guardou a variavel tipo um 14225425486
void pegaChuteArmazenaChute(){
    char letraDigitada;
    printf("Digite uma letra\n");
    scanf(" %c", &letraDigitada);


    // a lista lista certa receba a letra digitada exemplo digito m a listacerta recebe m no indice 0 porque e minha primeira tentativa
    // o * antes da variavel aqui eu ja estou modificando a variavel direto na memoria que peguei la em cima
    letrasCertas[tentativas] = letraDigitada;
    tentativas++;
}

int verificaSeLetraEstaNaLista(char palavraDaForca){
    int achouFunc = 0;

    for (int j = 0; j < tentativas; j++){
        // compara se a letra certa em cada indice da palavra e igual caso nao seja cai no else caso seja ele corta esse for e cai no if
        if(letrasCertas[j] == palavraDaForca){
            achouFunc = 1;
            break;
        }
    }
    return achouFunc;
}

//essa funçao coloca _ ou a letra caso seja a letra certa
void desenhaForca(){
    for (int i = 0; i < strlen(palavraSecreta); i++){  
        int achou = verificaSeLetraEstaNaLista(palavraSecreta[i]);

        if(achou == 1){
            printf("%c ", palavraSecreta[i]);
        }else {
            printf("_ ");
        }    
}
}

int main() {
    sprintf(palavraSecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;


    abertura();

    while (!acertou  && !enforcou ){
        // o & indica que estou enviando o ponteiro ou o local de memoria onde tentativas esta
        pegaChuteArmazenaChute();
        desenhaForca();
        printf("%s", letrasCertas);
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