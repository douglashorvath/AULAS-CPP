#include <stdio.h>

int main(void) { 

    printf("Digite um numero: ");

    int numero;
    scanf("%d", &numero);

    if(numero > 10 && numero < 100)
    {
        printf("O numero eh maior que 10 e menor que 100");
    }
    else{
        printf("O numero esta fora do range escolhido");
    }


    getchar();
    return 0;
}