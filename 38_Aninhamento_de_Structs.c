#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco{
    char rua[50];
    int numero;
};

struct pessoa{
    char nome[50];
    int idade;
    struct endereco end;
};

int main(void){

    struct pessoa p = {"John", 25};
    gets(p.end.rua);
    scanf("%d", &p.end.numero);

    printf("%s\n", p.end.rua);
    printf("%d\n", p.end.numero);

    system("pause");
    return(0);

}