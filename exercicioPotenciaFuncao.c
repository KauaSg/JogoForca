#include <stdio.h>
void potencia(int a, int b){
    int resultado = 1;

    for (int i = 0; i < b; i++){
        resultado = resultado * a;
    };
    printf("o resultado de %d elevado a %d e = %d", a, b, resultado);
}

int main(){
    potencia(4,3);
}