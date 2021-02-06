#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a = 1;

    do{ // Do While serve para executar uma parte do código anterior e depois fazer a verifição do While.
        printf("a = %d\n", a);
        a++;
    }
    while(a <= 5);{
        printf("a = %d\n", a);
        a++;
    }

    system("pause");
    return(0);

}
