#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int res;
    char p1[15];
    char p2[15];
    printf("Ingresa una palabra: ");
    scanf("%s",p1);
    printf("Ingresa una segunda palabra: ");
    scanf("%s",p2);
    res= strcmp(p1,p2);
    if(p1==p2){
        printf("Las dos palabras son iguales");
    }if(p1>p2){
        printf("La primer palabra es mayor");
    }if(p1<p2){
        printf("la segunda palabra es mayor");
    }
    return 0;
  
}