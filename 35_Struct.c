#include <stdio.h>
#include <stdlib.h>

struct pessoa{ // É declarado uma estrutura fora do 'int main'.
    char nome[50], rua[50];
    int idade, numero;
}; // É necessário '};' para concluir.

struct pessoa2{
    char nome[20], rua[20]; // É possível criar campos com o mesmo nome em estrutura diferentes.
};

int main(void){

    struct pessoa p1, p2, p3, p4; // Se cria uma ou mais variáveis para a estrutura.

    gets(p1.nome); // Para acessar, se usa a variável criada + '.' + campo.

    printf("%s\n", p1.nome);

    system("pause");
    return(0);

}