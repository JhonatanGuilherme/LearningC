#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(void){

    struct pessoa p1;
    // ou
    struct pessoa p2 = {"Ricardo", "Rua top", 15, 107};

    scanf("%s", &p1.nome);
    strcpy(p1.nome, "Joao");
    p1.idade = 25;
    p1.numero = 408;

    strcpy(p2.nome, p1.nome);
    strcpy(p2.rua, p1.rua);
    p2.idade = p1.idade;
    p2.numero = p1.numero;

    printf("%s\n", p1.nome);

    system("pause");
    return(0);

}