#include <stdio.h>
#include <stdlib.h>

int quadrado (int a){ // O tipo de uma função é o tipo que ela irá retornar em 'return'.
    return a * a;     // É necessário declarar os tipos de cada variável passada como parâmetro.
}
// ou é possível criar uma função tipo 'void', que não retorna nenhum valor.
void imprime (int n){
    for (int i = 1; i <= n; i ++){
        printf("Linha: %d\n", i);
    }
}

int main(void){

    int a = 10;

    printf("Quadrado de 'a' = %d\n", quadrado(a)); // A quantidade de parâmetros usados na função precisam ser o mesmo que os passados dentro do 'main'.
    // ou
    int b = quadrado(a);

    imprime(5);

    system("pause");
    return 0;

}
