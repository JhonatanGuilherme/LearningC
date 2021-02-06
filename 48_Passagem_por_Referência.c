#include <stdio.h>
#include <stdlib.h>

void somaReferencia(int *n) {
    *n += 1;
}

int main(void){

    int x = 5;
    somaReferencia(&x);
    printf("Depois da funcao: %d\n", x); // O valor retornado será 5 + 1, por se tratar de um ponteiro como parâmetro.

    system("pause");
    return 0;

}