#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 20, b;

    // a ++; // Variável '++' é usado para acrescentar '1' a variável.
    // ++ a; // '++' Variável tem o mesmo efeito.

    // a --; // Variável '--' tem efeito inverso.
    // -- a;

    b = ++a; // O resultado será 'a' = 21 e 'b' = 21.
    printf("%d %d\n", a, b);
    b = a++; // O resultado será 'a' = 21 e 'b' = 20.
    printf("%d %d\n", a, b);

    system("pause");

    return (0);
}