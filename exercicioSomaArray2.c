#include <stdio.h>
int soma(int nums[3], int tamanhoArray){
    int resultado = 0;

    for (int i = 0; i < tamanhoArray; i++){
        resultado += nums[i];
    }
    return resultado;
}

int main(){   
    int nums[3];

    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;

    int total = soma(nums, 3);
    printf("%d", total);
}