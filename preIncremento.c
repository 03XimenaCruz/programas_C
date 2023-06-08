#include <stdio.h>
#include <stdlib.h>

int main(){
    int var=1;
    int con=1;

    //Es equivalente a var = var+1
    printf("%d",++var);
    printf("%d",var);

    //ES equivalente a con = con-1
    printf("%d",--con);
    printf("%d",con);
    system("Pause");
    return 0;
}