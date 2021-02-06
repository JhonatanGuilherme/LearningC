#include <stdio.h>
#include <stdlib.h>

int main(void){

    char a[10] = {'J', 'o', 'h', 'n', '\0'}; // '\0' representa o fim da string, desconsiderado todos os espaços após.
    // ou
    char b[10] = {"John"};

    gets(a);
    // ou
    scanf("%s", &b);

    printf("%s\n", a);

    system("pause");
    return(0);

}