#include <stdio.h>
#include <stdlib.h>

int main(void){

    int A[5] = {1, 2, 3, 4, 5}; // É possível atribuir valores na declaração do array.

    int B[] = {1, 2, 3, 4}; // Não é necessário declarar o tamanho da array com inicialização.

    float C[2][2] = {1, 2, 3, 4};
    // ou
    double D[2][2] = {{1, 2}, {3, 4}};

    system("pause");
    return(0);

}