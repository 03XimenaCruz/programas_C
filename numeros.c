#include <stdio.h>

int main(){
    int n=1;
    int d;
    while(n<1000){
        d=n%3;
        if(d==0){
            printf("%d, ", n);
            
        }
        n++;
    }
}