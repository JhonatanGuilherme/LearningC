#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a = 20, b = 30;

    if (a > 10){
        printf("Variavel 'a' eh maior que 10. Valor = %d.\n", a);
    }

    if (b > 20) // Quando há somente um comando, não é necessário as chaves. É somente executado a primeira linha após o 'if'.
        printf("Variavel 'b' eh maior que 20. Valor = %d.\n", b);

    system("pause");

    return(0);

}