#include <stdio.h>
#include <stdlib.h>

void imprime(int *n, int m){
    for (int i = 0; i < m; i++){
        printf("%d\n", n[i]);
    }
}

int main(void){
    
    int v[5] = {1, 2, 3, 4, 5};
    imprime(v, 5);

    system("pause");
    return 0;

}
