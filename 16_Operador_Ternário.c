#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a = 2, b = 5, c;
    
    c = a > b ? a : b; // Operador ternário. De acordo com a condição, recebe 'a' caso verdadeiro ou 'b' caso falso.
    printf("%d\n", c);

    (a < b) ? printf("'b' eh maior que 'a'.\n")
            : printf("'b' eh menor que 'a'.\n");

    system("pause");

    return(0);

}