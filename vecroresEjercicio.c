#include <stdio.h>
#include <stdlib.h>

int main(){
    int vector[100];
    int i=0;
    int x=0;
    while(i<100){
        vector[i]=(2*x);
        printf("2*%d= %d, ", x , vector[i]);
        x++;
        i++;
    }
    system("Pause");
}