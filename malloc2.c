#include <stdio.h>
#include <stdlib.h>

int main (){
    int i,n,dato;
    char*buffer;
    printf("Escribe la longitud de la cadena: ");
    scanf("%d",&i);

    buffer=(char*)malloc((i+1)*sizeof(char));
    if(buffer==NULL)exit(1);

    for(n=0;n<i;n++){
        printf("Ingresa un dato: ");
        scanf("%s", &buffer[n]);
    buffer[i]='\0';
    }
    printf("Los valores del arreglo son: %s\n",buffer);
    free(buffer);
}