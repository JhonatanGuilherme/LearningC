#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastroAlunos{
    char nome[50];
    char matricula[20];
};

typedef struct cadastroAlunos *Alunos; // '*Alunos' é um ponteiro usado como apelido pra struct criada.

int main(void){

    struct cadastroAlunos John;

    gets(John.nome);
    gets(John.matricula);

    printf("Nome = %s.\n", John.nome);
    printf("Matricula = %s.\n", John.matricula); 

    system("pause");
    return 0;

}