#include <stdio.h>
#include <stdlib.h>

int main (){
    int n;
    printf("Ingresa un numero: ");
    scanf("%d", &n);
    int *tabla= malloc(sizeof(int)*10);
    for(int i=0;i<10;i++){
        *(tabla + i)=n*(i+1); 
    }

    printf("Tabla de multiplicar de %d\n",n);
    for(int i=0;i<10;i++){
        printf("%d * %d = %d\n", n, i+1, *(tabla+i));
    }
    free(tabla);
    return 0;
}

