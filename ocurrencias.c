#include <stdio.h>
#include <stdlib.h>

int main(){
    char p[100];
    int letra[30]={0};
    int i, longitud;

    printf("Ingresa una palabra: ");
    scanf("%s", p);
    longitud=strlen(p);
    for(i=0;i<longitud;i++){
        letra[p[i]- 'a']++;
    }
    printf("Ocurrencias \n");
    for(i=0;i<30;i++){
        if(letra[i]>0){
            printf("%c: %d\n",'a'+i,letra[i]);
        }
    }
}