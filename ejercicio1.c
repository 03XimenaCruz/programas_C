#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char p1[20];
    char p2[20];
    char p3[20];
    printf("Ingresa una palabra: \n");
    scanf("%s", p1);
    printf("Ingresa otra palabra: \n");
    scanf("%s", p2);

    printf("Antes \n");
    printf("Palabra 1: %s\n", p1);
    printf("Palabra 2: %s\n", p2);

    //despues
    printf("Despues \n");
    strcpy(p3,p1);
    strcpy(p1,p2);
    strcpy(p2,p3);
    printf("Palabra 1: %s\n",p1);
    printf("Palabra 2: %s\n",p2);
    
    return 0;
}