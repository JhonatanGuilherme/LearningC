#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a = 1;

    hell:
    if ((a >= 1) && (a <= 10)){
        printf("a = %d\n", a);
        a++;
        goto hell;
    }

    system("pause");
    return(0);

}
