#include <stdio.h>

int main(void){

    printf("Os 20 primeiros numeros pares sao: ");

    int par;

    // for(inicializacao; condicao; incrementacao)
    for(int i=0; i<20; i++){
        par = i*2;
        printf("\n%d", par);
    }

    getchar();
    return 0;
}