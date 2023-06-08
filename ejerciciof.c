#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int i;
    int suma=0;
    printf("Ingresa un numero: ");
    scanf("%d" , &n);
    for(i=1;i<=n;i++){
        suma=suma+i;
        //suma+=i;  
    }
    printf("La suma es: %d, ",suma);   
}