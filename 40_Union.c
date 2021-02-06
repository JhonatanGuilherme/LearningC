#include <stdio.h>
#include <stdlib.h>

union tipo{ // Parecido com struct, uma union permite fazer acessos controlados a nível de bits.
    short int x; // 'int' curto.
    unsigned char c; // 'char' sem sinal.
};

int main(void){

    union tipo v;
    v.c = 'a';
    printf("%s\n", v.c);

    system("pause");
    return 0;

}
