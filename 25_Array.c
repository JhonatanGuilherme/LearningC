#include <stdio.h>
#include <stdlib.h>

int main(void){

    int A[5], b = 3;
    
    for (b; b <= 8; b++){
        scanf("%d", &A[b]);
    }

    b = 3;
    for (b; b <= 8; b++){
        printf("%d\n", A[b]);
    }
    
    system("pause");
    return(0);

}