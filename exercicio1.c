#include<stdio.h>
#include<stdlib.h>

int main() {

    float soma, num1, num2;

    printf("Insira 2 numeros reais: ");
    scanf("%f %f", &num1, &num2);

    if (num2 != 0) {
    soma = num1 / num2;
    printf("O numero %.1f dividido por %.1f é igual a: %.1f", num1, num2, soma);
    } else {
    printf("Não existe divisão.");
    }
    

    return 0;
}