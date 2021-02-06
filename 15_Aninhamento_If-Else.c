#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a = 25;

    if (a > 30){
        printf("Variavel 'a' eh maior que 10. Valor = %d.\n", a);
    } else{
        if (a <= 25)
            printf("Variavel 'a' eh menor ou igual que 25. Valor = %d.\n", a);
    }

    system("pause");

    return(0);

}