#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a = 20, b = 30, c;
    c = (a > 10) && (b < 40); // '&&' representa 'and'.
    printf("Resultado: %d.\n", c);
    c = (a > 50) || (b > 10); // '||' representa 'or'.
    printf("Resultado: %d.\n", c);
    c = !(a > 5); // '!' representa 'negação'.
    printf("Resultado: %d.\n", c);

    system("pause");

    return(0);

}