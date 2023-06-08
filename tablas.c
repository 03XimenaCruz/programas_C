#include <stdio.h>
#include <stdlib.h>

int main (){
    int m;
    int n;
    int a;
    printf("Ingresa un numero: ");
    scanf("%d", &a);

    for(m=1; m<=a; m++){
        for(n=1; n<=a; n++){
            printf("%d \t", n*m);

        }
        printf("\n");
    }
    return 0;
}

