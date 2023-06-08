#include <stdio.h>

int main(){
    int n = 1;
    int cuadrado;
    int cubo;

    while(n<=500){
        cuadrado = n * n;
        cubo = n * n * n;
        printf("%d, %d, %d \n", n, cuadrado, cubo);
        n++;

    }
    return 0;
    
}