#include <stdio.h>
#include <stdlib.h>

int main(void){

    int A[5][3], b, c;
    
    for (b = 0; b <= 4; b++){
        for (c = 0; c <= 2; c++){
            scanf("%d", &A[b][c]);
        }
    }

    for (b = 0; b <= 4; b++){
        for (c = 0; c <= 2; c++){
            printf("%d ", A[b][c]);
        }
        printf("\n");
    }

    system("pause");
    return(0);

}