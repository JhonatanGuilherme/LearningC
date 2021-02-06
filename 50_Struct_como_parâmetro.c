#include <stdio.h>
#include <stdlib.h>

struct ponto {
    int x, y;
};

void imprimeValor(int n){
    printf("Valor = %d\n", n);
}
// ou por referência (ponteiros)
void atribuiValor(struct ponto *p2){
    (*p2).x = 10; // É necessário pôr o ponteiro entre parênteses.
    (*p2).y = 20;
}
int main(void){

    struct ponto p1 = {10, 20};
    imprimeValor(p1.x);
    imprimeValor(p1.y);
    atribuiValor(&p1); // Passando o endereço da struct 'p1' como parâmetro.
    printf("Valor = %d\n", p1.x);
    printf("Valor = %d\n", p1.y);

    system("pause");
    return 0;
}
