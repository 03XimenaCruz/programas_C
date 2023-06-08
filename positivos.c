#include <stdio.h>

int main (){
    int n=1;
    int d;

    while(n<100){
        d=n%7;
        if(d==0){
            printf(" ,");
        }else{
            printf("%d, ", n);
        }
        n++;
    }
}