#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(void){

    struct pessoa p[4];
    gets(p[0].nome);
    gets(p[1].rua);
    scanf("%d", &p[2].idade);
    scanf("%d", &p[3].numero);

    printf("%s, %s, %d, %d\n", p[0].nome, p[1].rua, p[2].idade, p[3].numero);

    system("pause");
    return(0);

}