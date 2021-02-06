#include <stdio.h>
#include <stdlib.h>

enum semana {Domingo = 1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};
// É possível enumerar "listas" de elementos e definir a sequência, como espécie de rótulos.

enum escapes {retrocesso = '\b', tabulacao = '\t', novaLinha = '\n'};

int main(void){
    
    printf("Domingo = %d.\n", Domingo);
    printf("Segunda = %d.\n", Segunda);
    printf("Terca = %d.\n", Terca);
    printf("Quarta = %d.\n", Quarta);
    printf("Quinta = %d.\n", Quinta);
    printf("Sexta = %d.\n", Sexta);
    printf("Sabado = %d.\n", Sabado);

    enum escapes e = novaLinha;
    printf("Teste %c de %c escrita.\n", e, e);
    e = tabulacao;
    printf("Teste %c de %c escrita.\n", e, e);

    system("pause");
    return 0;
}
