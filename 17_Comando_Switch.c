#include <stdio.h>
#include <stdlib.h>

int main(void){

    char a;
    printf("Digite um simbolo de pontuacao: ");
    scanf("%c", &a);

    switch(a){
        case '.': printf("Ponto.\n"); break; // Para cada 'case', um 'break' é necessário.
        case ',': printf("Virgula.\n"); break;
        default: printf("Nao eh simbolo de pontuacao.\n"); // 'default' serve como 'else'.
    }

    system("pause");

    return(0);

}