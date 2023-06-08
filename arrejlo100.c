#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100];
    int i=0;
    int b;

    while(i<100){
        b=100-i;
        a[i]=b;
        printf("a[%d]= %d\n", i,a[i]);
        i++;
    }
system("Pause");
return 0;
}

