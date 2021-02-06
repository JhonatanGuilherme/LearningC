#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a = 5;

    if (a > 10){
        printf("Variavel 'a' eh maior que 10. Valor = %d.\n", a);
    } else{
        printf("Variavel 'a' eh menor que 10. Valor %d.\n", a);
    }

    system("pause");

    return(0);

}