#include <stdio.h>

int main(void){

    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if(numero == 2 || numero == 10  || numero == 15){
        printf("O numero eh escolhido");
    }
    else{
        printf("O numero nao eh escolhido");
    }

    getchar();
    return 0;
}