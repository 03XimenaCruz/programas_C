#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[20];
    int i=0;
    int v,s=0,m,p;
    for(i=0;i<20;i++){
        printf("Ingresa un valor para a[%d]: %d",i,v);
    }

    //calcular promedio
    for(i=0;i<20;i++){
        s=a[0]+a[1];
        s=s+i;
    }
    p=s/20;
    printf("El promedio es: %d", p);

}