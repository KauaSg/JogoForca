#include <stdio.h>
void soma(int* numFun, int a, int b){
    *numFun = a + b;
}

int main(){
    int num = 0;
    soma(&num, 15, 15);
    printf("%d", num);
}