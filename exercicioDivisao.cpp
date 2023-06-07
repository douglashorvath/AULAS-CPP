#include <stdio.h>

int main(void){

    float numerador, denominador, resultado;

    printf("Insira o numerador: ");
    scanf("%f", &numerador);
    printf("Insira o denominador: ");
    scanf("%f", &denominador);

    resultado = numerador / denominador;

    printf("O resultado e: %.2f", resultado);

    getchar();
    return 0;
}