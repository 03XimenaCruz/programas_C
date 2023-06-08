#include <stdio.h>

int main(){
    int cal;
    printf("Ingresa tu calficación del examen: ");
    scanf("%d", &cal);
    if(cal>=8){
        printf("Felicidades probaste el curso\n");
    }
    return 0;
}