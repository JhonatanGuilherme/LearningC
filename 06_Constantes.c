#include <stdio.h>
#include <stdlib.h>

#define pi 3.14159 // 'define' é um método de criar uma constante.

int main(void) {
    const int a = 20; // 'const' também é um método de criar uma constante.
    printf("%d\n", a);
    printf("%lf\n", pi);

    system("pause");

    return (0);
}