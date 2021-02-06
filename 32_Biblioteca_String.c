#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Biblioteca usada para manipular strings.

int main(void){

    char a[10] = {"Linguagem C"}, c[10];
    int b, d;

    b = strlen(a); // Quantidade de caracteres.
    strcpy(c, a); // Copia a string da segunda para a primeira variável.
    strcat(c, a); // Concatena a string da segunda com a primeira variável.
    d = strcmp(c, a); // Retorna '0' caso haja diferença. Retorna '1' caso contrário.

    printf("%d\n", d);

    system("pause");
    return(0);

}