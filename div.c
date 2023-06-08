#include <stdio.h>

int main(){
    int n=1;
    int d,c;

    while(n<1000){
        d=n%2;
        c=n%7;
        if(d==0){
            if(c==0){
                printf("%d,", n);
            }
        }
        n++;
    }
    return 0;
}
