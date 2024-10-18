#include <stdio.h>
void soma(int numeros[10]){

    int resultado = 0;
    int numeroVezes = 0;

    printf("Quantos numero deseja adicionar a lista:\n");
    scanf("%d", &numeroVezes);


    for (int i = 0; i < numeroVezes; i++){
        int numeroDigitado;
        printf("Digite os numeros a serem somados\n");
        scanf("%d", &numeroDigitado);
        numeros[i] = numeroDigitado;
    }

    // a lista lista certa receba a letra digitada exemplo digito m a listacerta recebe m no indice 0 porque e minha primeira tentativa
    for (int j = 0; j < numeroVezes; j++)
    {
        resultado = resultado + numeros[j];
    }

    printf("o resultado da soma e = %d\n", resultado);
    
}

int main(){
    int numeros[10];
    soma(numeros);
}