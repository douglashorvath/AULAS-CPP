#include <stdio.h>

int main(void){

    int numero = 0;

    while(numero != 10){
        printf("Digite um numero: ");
        scanf("%d", &numero);
    }
    

    getchar();
    return 0;

}